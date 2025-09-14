#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include<string>
using namespace std;
const int MAX_ITEMS = 5;
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
class StudentInfo
{
public :
    StudentInfo();
    void getinfo(int,string,double);
    void findStudent(int&,bool&,string&,double&);
    void deleteInfo(int);
    int totalstudentIs();
    void resetInfo();
    void GetNextStudent(int&,string&,double&);

private :
    int ID[MAX_ITEMS];
    string NAME[MAX_ITEMS];
    double CGPA[MAX_ITEMS];
    int totalstudent;
    int currentStudent;
};
#endif // UNSORTEDTYPE_H_INCLUDED
