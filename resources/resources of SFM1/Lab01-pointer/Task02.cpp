#include <bits/stdc++.h>

using namespace std;

int Task02()
{
    int row, col;
    cout<< "Enter row : ";
    cin>> row;
    cout<< "Enter column : ";
    cin>> col;
    char** sent = new char*[row];

    for(int i=0; i<row; i++)
    {
        sent[i] = new char[col];
        cout<< "Enter the strings : ";
        for(int j = 0; j<col; j++)
        {
            cin>>sent[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cout<<sent[i][j];
        }
        cout<<"\n";
        delete[] sent[i];
    }
    delete sent;
    return 0;

}
