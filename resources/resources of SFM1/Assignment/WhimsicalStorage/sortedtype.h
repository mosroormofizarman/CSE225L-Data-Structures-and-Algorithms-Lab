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
    ItemType Top();
    void MakeEmpty();
    void RetrieveItem(ItemType&,bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
    void print();
    bool search(ItemType);
    void edit(ItemType,ItemType);
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


#endif // SORTEDTYPE_H_INCLUDED
