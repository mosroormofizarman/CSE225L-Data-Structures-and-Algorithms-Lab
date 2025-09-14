#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

class FullStack
{};
class EmptyStack
{};

template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

public:
    StackType();
    ~StackType();
    void MakeEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    void print();
    bool search(ItemType);
    void edit(ItemType,ItemType);
private:
    NodeType* topPtr;

};


#endif // STACKTYPE_H_INCLUDED
