#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include<string>

const int MAX_ITEMS = 5;

using namespace std;

template <class ItemType>

class UnsortedType
{
    public :
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void RetrieveItem(ItemType&, bool&);
        void ResetList();
        void GetNextItem(ItemType&);
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};

class studentInfo
{
    public :
        studentInfo();
        void getinfo(int, string, double);
        void findStudent(int&, string&, double&, bool&);
        void deleteInfo(int);
        int totalstudentIs();
        void resetInfo();
        void GetNextStudent(int&, string&, double&);

    private :
        int ID[MAX_ITEMS];
        string NAME[MAX_ITEMS];
        double CGPA[MAX_ITEMS];
        int totalstudent;
        int currentStudent;
};
#endif // UNSORTEDTYPE_H_INCLUDED
