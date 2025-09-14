#include <iostream>

using namespace std;

int main()
{

	int **Matrix;
	int rows,columns;

	cin>>rows;
	cout<<"Enter number of columns: ";
	cin>>columns;
	Matrix=new int*[rows];


	for(int i=0;i<rows;i++)
	{
		Matrix[i]=new int[columns];
		for(int j=0;j<columns;j++)
		{
			cout<<"Enter element in row "<<(i+1)<<" and  in column "<<(j+1)<<": ";
			cin>>Matrix[i][j];
		}
	}


	cout<<"The matrix is:\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
			cout<<Matrix[i][j]<<"\t";
		cout<<"\n";
	}


	for(int i=0;i<rows;i++)
		delete[] Matrix[i];
}
