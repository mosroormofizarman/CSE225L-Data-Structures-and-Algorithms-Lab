#include "SortedType.h"
#include "SortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
   SortedType<int> sl1;
    cout<< "before inserting any vale the length of the list is :"<<"\n"<< sl1.LengthIs()<<"\n";


    // inserting number in the list;
    int num;
    for(int i =0;i<5;i++)
    {
        cout << " Enter position "<<(i+1)<< ": ";
        cin>>num;
        sl1.InsertItem(num);
    }

    // display the list
    int x;
    cout<<"The list is : \n";
    for(int i=0;i<sl1.LengthIs();i++)
    {
        sl1.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<"\n";

    // find the data from the list
    bool found;
    int a;
    cout<<"Enter the value which you want to search : ";
    cin>>a;
    sl1.RetrieveItem(a,found);
    if(found)
    {
        cout<<"\nItem is found.\n";
    }
    else{
         cout<<"\nItem is not found.\n";
    }

      // find the data from the list
     cout<<"Enter the value which you want to search : ";
    cin>>a;
     sl1.RetrieveItem(a,found);
    if(found)
    {
        cout<<"\nItem is found.\n";
    }
    else{
         cout<<"\nItem is not found.\n";
    }

    //list is full or not
    found = sl1.IsFull();
    if(found)
    {
        cout<<"List is full.\n";
    }
    else{
        cout<<"List is not full.\n";
    }

    // delete data from the list
    int del;
    cout<<"Enter the value which you want to delete :";
    cin>>del;
    sl1.DeleteItem(del);
    sl1.ResetList();

    // display the list
     for(int i=0;i<sl1.LengthIs();i++)
    {
        sl1.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<"\n";

    // full or not
    found = sl1.IsFull();
    if(found)
    {
        cout<<"List is full.\n";
    }
    else{
        cout<<"List is not full.\n";
    }

    //task 2

    timeStamp t;

    //inserting time records

    int sec,m,h;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter record "<<(i+1)<<"(ss::mm::hh): " ;
        cin>>sec>>m>>h;
        t.InsertTime(sec,m,h);
    }

    //delete the time record;
      int ds,dm,dh;
      cout<<"\nEnter a time record which you want to delete from the list : ";
      cin>>ds>>dm>>dh;
    t.deleteTimeValue(ds,dm,dh);

    // reset the list (because the record start from position -1;
   t.ResetTimeRecoidList();
    cout<<"\n";

    // Display the list
    int s,mini,ho;
    for(int i=0;i<t.TotalTimeRecordIs();i++)
      {
          t.GetNextTime(s,mini,ho);
          cout<< s<<":"<<mini<<":"<<ho<<endl;
      }

    return 0;
}

