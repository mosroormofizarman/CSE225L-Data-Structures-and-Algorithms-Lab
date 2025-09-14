#include"unsortedType.cpp"
#include"studentInfo.cpp"
#include <iostream>
#include<string>


using namespace std;

int main()
{
    int value, get_value, new_insert, num, del;
    bool found;

    UnsortedType<int> obj1;

    cout << "Insert four items: " ;

    for(int i=0; i<4; i++)
    {
        cin >> value;
        obj1.InsertItem(value);
    }

    for(int i=0; i<obj1.LengthIs(); i++)
    {
        obj1.GetNextItem(get_value);
        cout << get_value << " ";
    }

    cout << "\nThe length of the list: "<< obj1.LengthIs();

    cout << "\nInsert one item: " ;
    cin >> new_insert;
    obj1.InsertItem(new_insert);
    obj1.ResetList();

    for(int i=0; i<obj1.LengthIs(); i++)
    {
        obj1.GetNextItem(get_value);
        cout <<get_value <<" ";
    }

    cout << "\nRetrieve: ";
    cin >> num;
    obj1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found";
    }
    else
    {
        cout <<"Item is not found";
    }

    cout << "\nRetrieve: ";
    cin >> num;
    obj1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found";
    }
    else
    {
        cout <<"Item is not found";
    }

    cout << "\nRetrieve: ";
    cin >> num;
    obj1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found";
    }
    else
    {
        cout <<"Item is not found";
    }

    cout << "\nRetrieve: ";
    cin >> num;
    obj1.RetrieveItem(num,found);
    if(found)
    {
        cout << "Item is found";
    }
    else
    {
        cout <<"Item is not found";
    }

    cout << endl;
    if(obj1.IsFull())
    {
         cout << "List is full";
    }
    else
    {
        cout << "List is not full";
    }

    cout << "\nDelete: ";
    cin >> del;
    obj1.DeleteItem(del);
    obj1.ResetList();

    if(obj1.IsFull())
    {
         cout << "List is full";
    }
    else
    {
        cout << "List is not full";
    }

    cout << "\nDelete: ";
    cin >> del;
    obj1.DeleteItem(del);
    obj1.ResetList();

    for(int i=0; i<obj1.LengthIs(); i++)
    {
        obj1.GetNextItem(get_value);
        cout <<get_value <<" ";
    }

    cout << "\nDelete: ";
    cin >> del;
    obj1.DeleteItem(del);
    obj1.ResetList();

    for(int i=0; i<obj1.LengthIs(); i++)
    {
        obj1.GetNextItem(get_value);
        cout <<get_value <<" ";
    }


    studentInfo obj2;

    int st_id, del1, find_id, finalID;
    string st_name, find_name, finalName;
    double cg, find_cg, finalCGPA;
    bool found1;

    cout << "\nInsert 5 student records:\n";

    for(int i=0; i<5; i++)
    {
        cout << "Enter " << i + 1 << " student record(ID:Name:CGPA): ";
        cin >> st_id >> st_name >> cg;
        obj2.getinfo(st_id, st_name, cg);
    }

    cout <<"Delete the record with ID: ";
    cin >> del1;
    obj2.deleteInfo(del1);
    obj2.resetInfo();

    cout << "Retrieve the record with ID: ";
    cin >> find_id;
    obj2.findStudent(find_id, find_name, find_cg,  found1);

    if(found1)
    {
        cout << "item is found.\n";
        cout << find_id << ", " << find_name << ", " << find_cg;
    }
    else{
        cout << "item is not found.";
    }

    cout << endl << endl;
    for(int i=0; i<obj2.totalstudentIs(); i++)
    {
        obj2.GetNextStudent(finalID, finalName, finalCGPA);
        cout << finalID << ", " << finalName << ", " << finalCGPA << endl;
    }

    return 0;
}
