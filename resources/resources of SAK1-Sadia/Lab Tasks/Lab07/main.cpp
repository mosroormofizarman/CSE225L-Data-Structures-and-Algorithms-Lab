#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"

int main()
{
    SortedType<TimeStamp> ob;

    int size, s, m, h;

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

    cout << endl;
    cout << "Insert the deletion time:  ";
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
