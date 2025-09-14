#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
#include <string>
#include<cmath>
#include<algorithm>
using namespace std;

bool ArePaired(char opeing,char ending)
{
    if(opeing == '(' && ending == ')')
    {
        return true;
    }
    else if(opeing == '{' && ending == '}')
    {
        return true;
    }
    else if(opeing == '[' && ending == ']')
    {
        return true;
    }
    else{
        return false;
    }
}
bool IsBalanced(string exp)
{
   	StackType<char> S;
    for(int i =0;i<exp.length();i++)
        {
    if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
               S.Push(exp[i]);
        }

    else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
            {
    if(S.IsEmpty() || !ArePaired(S.Top(),exp[i]))
    {
        return false;
    }

    else
    {
        S.Pop();
    }

    }
    }
    return S.IsEmpty() ? true:false;
    }
    bool sequence(string exp)
    {
        int num=exp.length();
        char S[num];
    for(int i =0;i<exp.length();i++)
        {
            S[i] = exp[i];
        }
      for(int i =0;i<exp.length()-1;i++)
        {
            if((S[i]=='+'||S[i]=='-'||S[i]=='*'||S[i]=='/'||S[i]=='^'||S[i]=='%')&&(S[i+1]=='+'||S[i+1]=='-'||S[i+1]=='*'||S[i+1]=='/'||S[i+1]=='^'||S[i+1]=='%'))
            {
                return false;
                break;
            }
        }
return true;
    }
// Function to find precedence of
// operators.
int precedence(char op){
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    if(op == '^')
    return 3;

    return 0;
}

// Function to perform arithmetic operations.
double applyOp(double a, double b, char op){
    switch(op){
        case '+':
            {
                double num;
                num = (a*1.0)+(b*1.0);
                 return num;
            }
        case '-':{
            double num;
                num = (a*1.0)-(b*1.0);
                 return num;
            }
        case '*':{
            double num;
                num = (a*1.0)*(b);
                 return num;
            }
        case '/':
            {
                double num;
                num = (a*1.0)/(b*1.0);
                 return num;
            }

        case '^':
            {
                double num;
                num = pow(a*1.0,b*1.0);
            }
    }
}

// Function that returns value of
// expression after evaluation.
double evaluate(string tokens){
    int i;

    // stack to store integer values.
    StackType <double> values;

    // stack to store operators.
    StackType <char> ops;

    for(i = 0; i < tokens.length(); i++){

        // Current token is a whitespace,
        // skip it.
        if(tokens[i] == ' ')
            continue;

        // Current token is an opening
        // brace, push it to 'ops'
         if(tokens[i] == '('){
            ops.Push(tokens[i]);
        }

        // Current token is a number, push
        // it to stack for numbers.
        else if(isdigit(tokens[i])){
            double val = 0.0;

            // There may be more than one
            // digits in number.
            while(i < tokens.length() && isdigit(tokens[i]))
            {
                val = (val*10.0) + (tokens[i]-'0');
                i++;
            }

            values.Push(val);

            // right now the i points to
            // the character next to the digit,
            // since the for loop also increases
            // the i, we would skip one
            //  token position; we need to
            // decrease the value of i by 1 to
            // correct the offset.
              i--;
        }

        // Closing brace encountered, solve
        // entire brace.
        else if(tokens[i] == ')')
        {
            while(!ops.IsEmpty() && ops.Top() != '(')
            {
                double val2 = values.Top();
                values.Pop();

                double val1 = values.Top();
                values.Pop();

                char op = ops.Top();
                ops.Pop();

                values.Push(applyOp(val1, val2, op));
            }

            // pop opening brace.
            if(!ops.IsEmpty())
               ops.Pop();
        }

        // Current token is an operator.
        else
        {
            // While top of 'ops' has same or greater
            // precedence to current token, which
            // is an operator. Apply operator on top
            // of 'ops' to top two elements in values stack.
            while(!ops.IsEmpty() && precedence(ops.Top()) >= precedence(tokens[i])){
                double val2 = values.Top();
                values.Pop();

                double val1 = values.Top();
                values.Pop();

                char op = ops.Top();
                ops.Pop();

                values.Push(applyOp(val1, val2, op));
            }

            // Push current token to 'ops'.
            ops.Push(tokens[i]);
        }
    }

    // Entire expression has been parsed at this
    // point, apply remaining ops to remaining
    // values.
    while(!ops.IsEmpty()){
        double val2 = values.Top();
        values.Pop();

        double val1 = values.Top();
        values.Pop();

        char op = ops.Top();
        ops.Pop();

        values.Push(applyOp(val1, val2, op));
    }

    return values.Top();
}

int main()
{

    string exp1;

    for(int i=0;i<4;i++)
    {
        cout<<"Enter a expression : ";
        getline(cin,exp1);
        exp1.erase(remove(exp1.begin(), exp1.end(), ' '), exp1.end());
         //cout<<exp1<<endl;
         if(IsBalanced(exp1)&&sequence(exp1))
    {
        cout<<evaluate(exp1)<<endl;


    }
    else{
        cout<<"Invalid Expression."<<endl;
    }
    }



    return 0;
}

