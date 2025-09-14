#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class SortedType
{
 public :
 SortedType();
 void MakeEmpty();
 bool IsFull();
 int LengthIs();
 void InsertItem(ItemType);
 void DeleteItem(ItemType);
 void RetrieveItem(ItemType&,
bool&);
 void ResetList();
 void GetNextItem(ItemType&);
 private:
 int length;
 ItemType info[MAX_ITEMS];
 int currentPos;
};
class timeStamp
{
public:
    timeStamp();
    void InsertTime(int,int,int);
    void deleteTimeValue(int,int,int);
    void GetNextTime(int&,int&,int&);
    bool isFullRecord();
    int TotalTimeRecordIs();
    void TimeRecordEmpty();
     void ResetTimeRecoidList();

private :
    int ss[MAX_ITEMS];
    int mm[MAX_ITEMS];
    int hh[MAX_ITEMS];
    int ts[MAX_ITEMS];

    int currentRecord;
    int totalRecord;

};
#endif // SORTEDTYPE_H_INCLUDED
