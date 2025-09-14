//
// Created by MOS on 11/16/2021.
//

#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
template <class ItemType>
class SortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&,
                      bool&);
    int InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED
