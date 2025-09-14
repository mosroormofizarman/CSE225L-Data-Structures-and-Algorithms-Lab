#include "SortedType.cpp"
#include "timeStamp.cpp"
#include <iostream>

using namespace std;

int main()
{
    SortedType<int> st;

    int num, get_num, find_num, delete_num;
    bool found_num;

    cout << "Length of the list: " << st.LengthIs();

    cout << "\n\nInsert five items: ";
    for(int i=0; i<5; i++)
    {
        cin >> num;
        cout << " ";
        st.InsertItem(num);
    }

    cout << "\nThe list is: ";
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(get_num);
        cout << get_num << " ";
    }

    cout << "\n\nRetrieve: ";
    cin >> find_num;
    st.RetrieveItem(find_num, found_num);
    if(found_num)
    {
        cout << endl << "Item is found.";
    }
    else
    {
         cout << endl << "Item is not found.";
    }

    cout << "\n\nRetrieve: ";
    cin >> find_num;
    st.RetrieveItem(find_num, found_num);
    if(found_num)
    {
        cout << endl << "Item is found.";
    }
    else
    {
         cout << endl << "Item is not found.";
    }

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

    cout << "\n\nDelete: ";
    cin >> delete_num;
    st.DeleteItem(delete_num);
    st.ResetList();

    cout << "\nThe list: ";
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(get_num);
        cout << get_num << " ";
    }

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

    timeStamp ts;

    int sec, mi, ho, ds, dm, dh, sE, mI, hO;

    cout << "\n\nInsert 5 time values in the format ssmmhh: ";
    for(int i=0; i<5; i++)
    {
        cin >> sec >> mi >> ho;
        ts.InsertTime(sec, mi, ho);
    }

    cout << "\nDelete the timestamp: ";
    cin >> ds >> dm >> dh;
    ts.deleteTimeValue(ds, dm, dh);
    ts.ResetTime();

    cout << endl;
    for(int i=0; i<ts.TotalTimeRecord(); i++)
    {
        ts.GetNextTime(sE, mI, hO);
        cout << sE << ":" << mI << ":" << hO << endl;
    }
    return 0;
}
