#include <iostream>

using namespace std;

int main()
{

	int **Matrix;
	int i=0,columns;

	cout<<"Enter number of columns: ";
	cin>>columns;
	Matrix=new int*[i];


	for(int i=0;i<1;i++)
	{
		Matrix[i]=new int[columns];
		for(int j=0;j<columns;j++)
		{
			cout<<"Enter element in column "<<(j+1)<<": ";
			cin>>Matrix[i][j];
		}
	}


	cout<<"The matrix is:\n";
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<columns;j++)
			cout<<Matrix[i][j]<<"\t";
		cout<<"\n";
	}


	for(int i=0;i<1;i++)
		delete[] Matrix[i];
}
