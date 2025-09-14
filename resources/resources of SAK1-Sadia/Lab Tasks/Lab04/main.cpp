#include"unsortedType.cpp"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int value, get_value, new_insert, num, del;
    bool found;

    UnsortedType<int> ob1;

    cout << "Insert four items:" << endl;

    for(int i=0; i<4; i++)
    {
        cout << "Enter position "<<(i+1) <<" value :";
        cin >> value;
        ob1.InsertItem(value);
    }
    cout << endl;
    for(int i=0; i<ob1.LengthIs(); i++)
    {
        ob1.GetNextItem(get_value);
        cout << get_value << " ";
    }

    cout << endl;
    cout << endl << "The length is : "<< ob1.LengthIs() << endl;

    cout << endl;
    cout << endl << "Enter new value :  ";
    cin >> new_insert;
    ob1.InsertItem(new_insert);
    ob1.ResetList();

    cout << endl;
    for(int i=0; i<ob1.LengthIs(); i++)
    {
        ob1.GetNextItem(get_value);
        cout <<get_value <<" ";
    }

    cout << endl << endl <<"Enter a value which you want to find : ";
    cin >> num;
    cout << endl;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found." << endl;
    }
    else{
        cout<<"Item is not found." << endl;
    }

    cout << endl << "Enter a value which you want to find : ";
    cin >> num;
    cout << endl;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found." << endl;
    }
    else{
        cout<<"Item is not found." << endl;
    }

    cout << endl << "Enter a value which you want to find : ";
    cin >> num;
    cout << endl;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found." << endl;
    }
    else{
        cout<<"Item is not found." << endl;
    }

    cout << endl << "Enter a value which you want to find : ";
    cin >> num;
    cout << endl;
    ob1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found." << endl;
    }
    else{
        cout<<"Item is not found." << endl;
    }

    cout << endl;
    if(ob1.IsFull())
    {
         cout <<"List is full." << endl;
    }
    else{
        cout<<" List is not full." << endl;
    }

    cout <<endl <<"Enter a value you want to delete from list : ";
    cin>> del;

    ob1.DeleteItem(del);
    ob1.ResetList();

    cout << endl;
    if(ob1.IsFull())
    {
         cout << "List is full." << endl;
    }
    else{
        cout << "List is not full." << endl;
    }

    cout <<endl <<"Enter a value you want to delete from list : ";
    cin>> del;
    ob1.DeleteItem(del);
    ob1.ResetList();

    cout << endl;
    for(int i=0; i<ob1.LengthIs(); i++)
    {
        ob1.GetNextItem(get_value);
        cout <<get_value <<" ";
    }

    cout <<endl << endl <<"Enter a value you want to delete from list : ";
    cin>> del;
    ob1.DeleteItem(del);
    ob1.ResetList();

    cout << endl;
    for(int i=0; i<ob1.LengthIs(); i++)
    {
        ob1.GetNextItem(get_value);
        cout <<get_value <<" ";
    }

    studentInfo ob2;

    int st_id, del1, find_id, finalID;
    string st_name, find_name, finalName;
    double cg, find_cg, finalCGPA;
    bool found1;

    cout << endl << endl;
    cout << "Insert five student records:" << endl;

    for(int i=0; i<5; i++)
    {
        cout << "Enter "<< i+1 << "student record(ID:Name:CGPA):    ";
        cin >> st_id >> st_name >> cg;
        ob2.getinfo(st_id, st_name, cg);
    }
    cout << endl << endl;
    cout <<"Enter ID to delete the student record: ";
    cin >> del1;
    ob2.deleteInfo(del1);
    ob2.resetInfo();

    cout << endl << endl;
    cout << "Enter ID to find the student record: ";
    cin >> find_id;
    ob2.findStudent(find_id, find_name, find_cg,  found1);
    cout << endl;

    if(found1)
    {
        cout << "item is found." << endl;
        cout << find_id << " " << find_name << " " << find_cg;
    }
    else{
        cout << "item is not found." << endl;
    }

    cout << endl << endl;
    for(int i=0; i<ob2.totalstudentIs(); i++)
    {
        ob2.GetNextStudent(finalID, finalName, finalCGPA);
        cout << finalID << ", " << finalName << ", " << finalCGPA << endl;
    }

    return 0;
}
