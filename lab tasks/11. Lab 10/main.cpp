#include <iostream>
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
    else
    {
        return false;
    }
}
bool IsBalanced(string exp)
{
   	StackType<char> S;
    for(int i=0; i<exp.length(); i++)
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
    for(int i=0;i<exp.length();i++)
    {
        S[i] = exp[i];
    }
    for(int i=0;i<exp.length()-1;i++)
    {
        if((S[i]=='+'||S[i]=='-'||S[i]=='*'||S[i]=='/'||S[i]=='^'||S[i]=='%')&&(S[i+1]=='+'||S[i+1]=='-'||S[i+1]=='*'||S[i+1]=='/'||S[i+1]=='^'||S[i+1]=='%'))
        {
            return false;
            break;
        }
    }
    return true;
}
int precedence(char op)
{
    if(op == '+'||op == '-')
    {
        return 1;
    }
    if(op == '*'||op == '/')
    {
        return 2;
    }
    if(op == '^')
    {
      return 3;
    }
    return 0;
}
double applyOp(double a, double b, char op)
{
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
double evaluate(string tokens)
{
    int i;
    StackType <double> values;
    StackType <char> ops;

    for(i = 0; i < tokens.length(); i++)
    {
        if(tokens[i] == ' ')
        {
            continue;
        }
        if(tokens[i] == '(')
        {
            ops.Push(tokens[i]);
        }
        else if(isdigit(tokens[i]))
        {
            double val = 0.0;
            while(i < tokens.length() && isdigit(tokens[i]))
            {
                val = (val*10.0) + (tokens[i]-'0');
                i++;
            }
            values.Push(val);
            i--;
        }
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
            if(!ops.IsEmpty())
               ops.Pop();
        }
        else
        {
            while(!ops.IsEmpty() && precedence(ops.Top()) >= precedence(tokens[i])){
                double val2 = values.Top();
                values.Pop();

                double val1 = values.Top();
                values.Pop();

                char op = ops.Top();
                ops.Pop();

                values.Push(applyOp(val1, val2, op));
            }
            ops.Push(tokens[i]);
        }
    }
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
        cout<<"Enter a expression: ";
        getline(cin,exp1);
        exp1.erase(remove(exp1.begin(), exp1.end(), ' '), exp1.end());
        if(IsBalanced(exp1)&&sequence(exp1))
        {
            cout << evaluate(exp1) << endl;
        }
        else
        {
            cout << "Invalid Expression." << endl;
        }
    }
    return 0;
}


