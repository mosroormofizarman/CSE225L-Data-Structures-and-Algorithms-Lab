#include"binarysearchtree.h"
//#include"quetype.cpp"
#include<iostream>
using namespace std;
template<class ItemType>
TreeType<ItemType>::TreeType()
{
    root = NULL;


}
template<class ItemType>
void Destroy(TreeNode<ItemType>*&tree)
{

    if(tree!= NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree= NULL;

    }
}
template<class ItemType>
TreeType<ItemType>::~TreeType()
{
    Destroy(root);

}
template<class ItemType>
void TreeType<ItemType>::MakeEmpty()
{
    Destroy(root);

}
template<class ItemType>
bool TreeType<ItemType>::IsEmpty()
{
    return root == NULL;
}
template<class ItemType>
bool TreeType<ItemType>::IsFull()
{
    TreeNode<ItemType> location;
    try{
        location = new  TreeNode<ItemType>;
        delete location;
        return false;

    }
    catch(bad_alloc& exception)
    {
        return true;

    }

}
template<class ItemType>
int CountNodes(TreeNode<ItemType>*tree)
{

    if(tree== NULL)
        return 0;
    else
        return CountNodes(tree->left)+CountNodes(tree->right)+1;

}
template<class ItemType>
int TreeType<ItemType>::LengthIs()
{
    return CountNodes(root);

}
template<class ItemType>
void Retrieve(TreeNode<ItemType>* tree, ItemType& item ,bool& found)
{
    if(tree==NULL)
        found = false;
    else if(item < tree->info)
        Retrieve(tree->left,item,found);
    else if ( item> tree->info)
        Retrieve(tree->right,item,found);
    else
    {
        item = tree->info;
        found = true;

    }

}
template<class ItemType>
void TreeType<ItemType>::RetrieveItem(ItemType& item ,bool& found)
{

    Retrieve(root,item,found);

}

void insert(TreeNode<ItemType>*&tree,
itemtype item){

if(tree==NUll){
tree=new TreeNode <itemtype>:
tree->right=NUll;
tree->left=NUll;
tree->info=item;
}
else if(item<tree-> info)  {
 insert(tree->left,item);
} else
    insert(tree->right,item);

}
template <class itemtype>
void TreeType<ItemType>::InsertItem(ItemType item)
{



insert(root,item);
}
template <class itemtype>
void delete(TreeNode <itemtype>*&tree){
if(item<tree->info)
delete (tree->left,item);
else if(item->tree->info);
else
deleteNode(tree);
}
template <class itemtype>
void deletenode(treenode<itemtype>*&tree)
{
itemtype data;
TreeNode <itemtype>*temptr;
tempptr=tree;
if(tree->left==NUll)
{
tree=tree->right;
delete tempPtr;

}
else if(tree->right==NUll){
tree=tree->left;
delete tempPtr;
}
else
{getpredecessor(tree->left,data);
tree->info=data;
delete(tree->left,data);

            }
}
template <class itemtype>
void Getpredecessor(TreeNode<itemtype >*tree,itemtype &data)
{
while (tree ->right!=NULl)
tree=tree->right;
data=tree->info;
}
template <class itemtype>
void TXmGRin2<26i9AksGm>U:e:PKbVEsMWYHq(tbqK item )
{delete (root,item);}

}




template <class ItemType>
void PreOrder(TreeNode<ItemType>* tree, QueType<ItemType>& Que)
{
    if(tree!=NULL)
    {
        Que.Enqueue(tree->info);
        preOrder(tree->left, Que);
        preOrder(tree->right, Que);
    }
}

template <class ItemType>
void InOrder(TreeNode<ItemType>* tree, QueType<ItemType>& Que)
{
    if(tree!=NULL)
    {
        InOrder(tree->left, Que);
        Que.Enqueue(tree->info);
        InOrder(tree->right, Que);
    }
}

template <class ItemType>
void PostOrder(TreeNode<ItemType>* tree, QueType<ItemType>& Que)
{
    if(tree!=NULL)
    {
        PostOrder(tree->left,Que);
        PostOrder(tree->right,Que);
        Que.Enque(tree->info);
    }
}

template class <ItemType>
void TXmGRin2<26i9AksGm>U:e:PKbVEsMWYH(qtbqK order)
{
    switch(order)
    {
    case PRE_ORDER:
        PreOrder(root, preQue);
        break;
    case IN_ORDER:
        InOrder(root,inQue);
        break;
    case POST_ORDER:
        PostOrder(root,postQue);
        break;

    }
}

template class <ItemType>
void TreeType<ItemType>::GetNextItem(ItemType& item, OrderType order, bool& finished)
{
    finished=false;
    switch(order)
    {
    case PRE_ORDER:
        preQue.Dequeue(item);
        if(preQue.IsEmpty())
            finished=true;
        break;

    case IN_ORDER:
        inQue.Dequeue(item);
        if(inQue.IsEmpty())
            finished=true;
        break;

    case POST_ORDER:
        postQue.Dequeue(item);
        if(postQue.IsEmpty())
            finished=true;
        break;
    }
}

template class <ItemType>
void printTree(TreeNode<ItemType>* tree)
{
    if(tree!=NULL)
    {
        printTree(tree->left);
        cout<<tree->info<<" ";
        printTree(tree->right);
    }
}

template class <ItemType>
void TreeType<ItemType>::print()
{
    printTree(root);
}







