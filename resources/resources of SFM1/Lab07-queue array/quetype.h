#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

//exception class thrown by enqueue when queue is full
class FullQueue
{

};

//exception class thrown by dequeue when queue is empty
class EmptyQueue
{

};

template<class ItemType>
class QueueType
{
    public:
        QueueType();
        QueueType(int);
        ~QueueType();
        void makeEmpty();
        bool isEmpty();
        bool isFull();
        void enqueue(ItemType);
        void dequeue(ItemType&);
        void printQueue();
    private:
        int front, rear, maxQueue;
        ItemType *items;
};


#endif // QUETYPE_H_INCLUDED
