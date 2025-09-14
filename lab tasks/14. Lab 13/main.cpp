#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

using namespace std;

template<class ItemType>
void BestOrder(TreeType<ItemType> &Tree, int arr[], int start, int last)
{
    if (start == last)
    {
        Tree.InsertItem(arr[start]);
        return;
    }

    if (start >= last)
    {
        return;
    }

    int mid = (start + last) / 2;
    Tree.InsertItem(arr[mid]);
    BestOrder(Tree,arr,start,mid - 1);
    BestOrder(Tree,arr,mid + 1,last);
}

int main()
{
    int num;

    TreeType<int> tree1;
    bool f;
    f=tree1.IsEmpty();
    if(f)
    {
        cout << "Tree is empty.";
    }
    else{
         cout << "Tree is not empty.";
    }

    cout << "\nEnter ten items:\n";
    for(int i=0;i<10;i++)
    {
        cin >> num;
        tree1.InsertItem(num);
    }
    f=tree1.IsEmpty();
    if(f)
    {
        cout << "Tree is empty.";
    }
    else{
         cout << "Tree is not empty.";
    }

    cout << "\nThe length of  the tree is: " << tree1.LengthIs();
    cout << "\nRetrieve: ";
    cin >> num;
    tree1.RetrieveItem(num,f);
    if(f)
    {
        cout << "Item is found.";
    }
    else
    {
        cout << "Item is not found.";
    }

    cout << "\nRetrieve: ";
    cin >> num;
    tree1.RetrieveItem(num,f);
    if(f)
    {
        cout << "Item is found.";
    }
    else
    {
        cout << "Item is not found.";
    }
    tree1.ResetTree(IN_ORDER);
    bool end = false;
    cout << "\nIN Order : ";
    while (!end)
    {
        int y;
        tree1.GetNextItem(y, IN_ORDER, end);
        cout << y << " ";
    }
    end = false;
    tree1.ResetTree(PRE_ORDER);
    cout<<"\nPRE Order : ";
    while (!end)
    {
        int y;
        tree1.GetNextItem(y, PRE_ORDER, end);
        cout << y << " ";
    }
    end = false;

    tree1.ResetTree(POST_ORDER);
      cout << "\nPOST Order : ";
    while (!end)
    {
        int y;
        tree1.GetNextItem(y, POST_ORDER, end);
        cout << y << " ";
    }

    tree1.MakeEmpty();
    cout <<"\nTree Empty";
    cout <<"\nEnter 10 items:\n";
    for(int i=0;i<10;i++)
    {
        cin >> num;
        tree1.InsertItem(num);
    }
    end = false;
    int siz = 10;
    int ar[siz];
    tree1.ResetTree(IN_ORDER);
    int c=0;
    while (!end)
    {
        int y;
        tree1.GetNextItem(y, IN_ORDER, end);
        ar[c]= y;
        c++;
    }

    tree1.MakeEmpty();
    BestOrder(tree1, ar, 0, siz - 1);
     end = false;
    tree1.ResetTree(PRE_ORDER);
    cout << "BEST Order: ";
    while (!end)
    {
        int y;
        tree1.GetNextItem(y, PRE_ORDER, end);
        cout << y << " ";
    }
    cout << endl;
    return 0;
}
