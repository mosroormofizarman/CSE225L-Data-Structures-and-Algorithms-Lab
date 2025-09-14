#include <iostream>

using namespace std;

int main()
{
    cout << "DMA for 2D array" << endl;
    cout<<"please enter the row and column"<<endl;
    int row,col;
    cin>>row;
    cin>>col;

    int **pt = new int*[row];
    for(int counter=0;counter<row; counter++)
    {
        pt[counter] = new int[col];
    }
    //storing the value in 2D array
    for(int iter_row=0; iter_row<row;iter_row++)
    {
        for(int iter_col =0; iter_col<col;iter_col++ )
        {
            pt[iter_row][iter_col]= iter_col;
        }
    }

    for(int iter_row=0; iter_row<row;iter_row++)
    {
        for(int iter_col =0; iter_col<col;iter_col++ )
        {
            cout<<pt[iter_row][iter_col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
