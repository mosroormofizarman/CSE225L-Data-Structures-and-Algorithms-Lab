#include "UnsortedType.h"
template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
 length = 0;
 currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
length = 0;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
 return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
 return length;
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
 currentPos = -1;
}
template <class ItemType>
void
UnsortedType<ItemType>::GetNextItem(ItemType&
item)
{
 currentPos++;
 item = info [currentPos] ;
}
template <class ItemType>
void
UnsortedType<ItemType>::RetrieveItem(ItemType&
item, bool &found)
{
    /*for(int i=0;i<LengthIs();i++)
    {
        if(item == info[i])
        {
            found = true;
            item = info[i];
        }
    }*/
 int location = 0;
 bool moreToSearch = (location < length);
 found = false;
 while (moreToSearch && !found)
 {
 if(item == info[location])
 {
 found = true;
 item = info[location];
 }
 else
 {
 location++;
 moreToSearch = (location < length);
 }
 }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType
item)
{
 info[length] = item;
 length++;
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType
item)
{
 int location = 0;
 while (item != info[location])
 location++;
 info[location] = info[length - 1];
 length--;
}

StudentInfo:: StudentInfo()
{
    totalstudent = 0;
    currentStudent = -1;
}

void StudentInfo ::getinfo(int id,string name,double cg)
{
    ID[totalstudent] = id;
    NAME[totalstudent] = name;
    CGPA[totalstudent] = cg;
    totalstudent++;

}
int StudentInfo ::totalstudentIs()
{
    return totalstudent;
}
void StudentInfo ::findStudent(int& id,bool& found,string& name,double&cg)
{
    for(int i=0;i<totalstudentIs();i++)
    {
        if( id == ID[i])
        {
            found = true;
            id = ID[i];
            name = NAME[i];
            cg = CGPA[i];
            break;
        }
        else{
            found = false;
        }
    }
}
void StudentInfo:: deleteInfo(int id)
{
int location = 0;
 while (id != ID[location])
 location++;
 ID[location] = ID[totalstudent - 1];
 NAME[location] = NAME[totalstudent-1];
 CGPA[location] = CGPA[totalstudent-1];
 totalstudent--;
}
void StudentInfo ::GetNextStudent(int& id ,string& name,double&cg)
{
    currentStudent++;
    id = ID[currentStudent];
    name = NAME[currentStudent];
    cg = CGPA[currentStudent];

}
void StudentInfo :: resetInfo()
{
    currentStudent = -1;
}
