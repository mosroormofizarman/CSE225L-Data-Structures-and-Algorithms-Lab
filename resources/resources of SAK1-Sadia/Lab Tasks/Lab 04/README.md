# Unsorted List (array based)

> In today’s lab we will design and implement the List ADT where the items in the list are unsorted.
## unsortedtype.h

#ifndef UNSORTEDTYPE_H_INCLUDED  
#define UNSORTEDTYPE_H_INCLUDED  
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
#endif // UNSORTEDTYPE_H_INCLUDED  


  ## unsortedtype.cpp

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

  

> Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to
the header file or the source file.
<img src="https://github.com/mosroormofizarman/CSE225L-Data-Structures-and-Algorithms-Lab/blob/main/Lab%20Tasks/Lab%2004/question_table.PNG" />
  
  
# Solution
     
main.cpp
---------
<img src="https://github.com/mosroormofizarman/CSE225L-Data-Structures-and-Algorithms-Lab/blob/main/Lab%20Tasks/Lab%2004/main.png" />  
 
unsortedtype.h
-------------
<img src="https://github.com/mosroormofizarman/CSE225L-Data-Structures-and-Algorithms-Lab/blob/main/Lab%20Tasks/Lab%2004/unsortedtype(h).png" />
 
unsortedtype.cpp
---------------
<img src="https://github.com/mosroormofizarman/CSE225L-Data-Structures-and-Algorithms-Lab/blob/main/Lab%20Tasks/Lab%2004/unsortedtype(cpp).png" />  

