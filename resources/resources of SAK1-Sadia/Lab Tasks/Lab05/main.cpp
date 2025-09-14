#include "SortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    SortedType<int> st;

    int num, get_num, find_num, delete_num;
    bool found_num;

    // Printing length of the list
    cout << "Before inserting any vale the length of the list is:   " << st.LengthIs();

    // Inserting 5 numbers in the list
    cout << endl << endl;
    for(int i=0; i<5; i++)
    {
        cout << "Enter position " << i+1 << ":  ";
        cin >> num;
        st.InsertItem(num);
    }

    // Printing the list
    cout << endl << endl;
    cout << "The list is: " << endl;
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(get_num);
        cout << get_num << " ";
    }


    // Retrieve data from the list
    cout << endl << endl;
    cout << "Enter the value which you want to search: ";
    cin >> find_num;
    st.RetrieveItem(find_num, found_num);
    cout << endl;
    if(found_num)
    {
        cout << "Item is found.";
    }
    else
    {
         cout << "Item is not found.";
    }

    // Retrieve data from the list
    cout << endl << endl;
    cout << "Enter the value which you want to search: ";
    cin >> find_num;
    st.RetrieveItem(find_num, found_num);
    cout << endl;
    if(found_num)
    {
        cout << "Item is found.";
    }
    else
    {
         cout << "Item is not found.";
    }

    // List is full or not
    cout << endl << endl;
    found_num = st.IsFull();
    if(found_num)
    {
        cout << "List is full.";
    }
    else
    {
         cout << "List is not full.";
    }

    // Delete data from the list
    cout << endl << endl;
    cout << "Enter the value which you want to delete: ";
    cin >> delete_num;
    st.DeleteItem(delete_num);
    st.ResetList();

    // Printing the list
    cout << endl << endl;
    cout << "The list is: " << endl;
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(get_num);
        cout << get_num << " ";
    }

    // List is full or not
    cout << endl << endl;
    found_num = st.IsFull();
    if(found_num)
    {
        cout << "List is full.";
    }
    else
    {
         cout << "List is not full.";
    }

    // Creating object class
    timeStamp tS;

    int sec, mi, ho, ds, dm, dh, sE, mI, hO;

    // Inserting 5 time values
    cout << endl << endl;
    for(int i=0; i<5; i++)
    {
        cout << "Enter record " << i+1 << " (ss::mm::hh): " ;
        cin >> sec >> mi >> ho;
        tS.InsertTime(sec, mi, ho);
    }

    // Delete the time record
    cout << endl << endl;
    cout << "Enter a time record which you want to delete from the list : ";
    cin >> ds >> dm >> dh;
    tS.deleteTimeValue(ds, dm, dh);
    tS.ResetTimeRecoidList();

    // Printing the list
    cout << endl << endl;
    for(int i=0; i<tS.TotalTimeRecordIs(); i++)
    {
        tS.GetNextTime(sE, mI, hO);
        cout << sE << ":" << mI << ":" << hO << endl;
    }

    return 0;
}

