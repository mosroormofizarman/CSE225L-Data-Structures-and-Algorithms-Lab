#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"

using namespace std;

int main()
{
    int size, s, m, h;

    SortedType<TimeStamp> ob;

    cout << "Time quantity: ";
    cin >> size;
    for(int i=0; i<size; i++)
    {
        if(!ob.IsFull()) {
            cin >> s >> m >> h;
            TimeStamp x(s,m,h);
            ob.InsertItem(x);
        }
    }

    cout << "\nInsert the deletion time:  ";
    cin >> s >> m >> h;
    TimeStamp y(s,m,h);
    ob.DeleteItem(y);

    TimeStamp z;
    for(int i=0; i<ob.LengthIs(); i++)
    {
        ob.GetNextItem(z);
        cout << z << endl;
    }
    ob.ResetList();

    return 0;
}
