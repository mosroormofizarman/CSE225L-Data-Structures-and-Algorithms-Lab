#include"UnsortedType.h"
#include"UnsortedType.cpp"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int a,x;
    UnsortedType<int> ob1;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter position "<<(i+1) <<" value :";
        cin>>a;
         ob1.InsertItem(a);
    }
    for(int i=0;i<ob1.LengthIs();i++)
    {
        ob1.GetNextItem(x);
        cout<<" "<<x;
    }
    cout<< " \nThe length is : "<< ob1.LengthIs()<<"\n";
    int newINt;
    cout<<"\nEnter new value : ";
    cin>>newINt;
    ob1.InsertItem(newINt);
    ob1.ResetList();

    cout<<"\n";
    for(int i=0;i<ob1.LengthIs();i++)
    {
        ob1.GetNextItem(x);
        cout<<" "<<x;
    }
    bool found;
    int num;
    cout<<"\nEnter a value which you want to find : ";
    cin>>num;
    cout<<"\n";
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout<<"Item is found.\n";
    }
    else{
        cout<<"Item is not found.\n";
    }
    cout<<"\nEnter a value which you want to find : ";
    cin>>num;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout<<"Item is found.\n";
    }
    else{
        cout<<"Item is not found.\n";
    }
    cout<<"\nEnter a value which you want to find : ";
    cin>>num;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout<<"Item is found.\n";
    }
    else{
        cout<<"Item is not found.\n";
    }
    cout<<"\nEnter a value which you want to find : ";
    cin>>num;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout<<"Item is found.\n";
    }
    else{
        cout<<"Item is not found.\n";
    }
    if(ob1.IsFull())
    {
         cout<<" List is full.\n";
    }
    else{
        cout<<" List is not full.\n";
    }
    int del;
    cout<<"\nEnter a value you want to delete from list : ";
    cin>> del;
   ob1.DeleteItem(del);
  ob1.ResetList();
  if(ob1.IsFull())
  {
      cout<<"List is full.\n";
  }
  else{
    cout<<"List is not full.\n";
  }
  cout<<"\nEnter a value you want to delete from list : ";
    cin>> del;
  ob1.DeleteItem(del);
  ob1.ResetList();
   for(int i=0;i<ob1.LengthIs();i++)
   {
       ob1.GetNextItem(x);
       cout<<" "<<x;
   }
   cout<<"\nEnter a value you want to delete from list : ";
    cin>> del;
ob1.DeleteItem(del);
ob1.ResetList();
cout<<"\n";
 for(int i=0;i<ob1.LengthIs();i++)
   {
       ob1.GetNextItem(x);
       cout<<" "<<x;
   }

   int id;
   double cg;
   string name;
   StudentInfo sob;
   sob.getinfo(15234,"Jon",2.6);
   sob.getinfo(13732,"Tyrion",3.9);
   sob.getinfo(13569,"Sandor",1.2);
   sob.getinfo(15467,"Ramsey2",3.1);
   sob.getinfo(16285,"Arya",3.1);
    sob.deleteInfo(15467);
    sob.resetInfo();

    string sname;
    double scg;
    int sid=13569;
    bool found1;
    sob.findStudent(sid,found1,sname,scg);
    if(found1)
    {
        cout<<"\nitem is found.\n";
        cout<< sid << " " << sname<<" "<< scg;
    }
    else{
        cout<<"\nitem is not found.\n";
    }
cout<<"\n";
cout<<"\n";
int finalID;
string finalName;
double finalCGPA;
  for(int i=0;i<sob.totalstudentIs();i++)
    {
        sob.GetNextStudent(finalID,finalName,finalCGPA);
        cout<< finalID<<", "<<finalName<<", "<<finalCGPA<<"\n";
    }
    return 0;
}
