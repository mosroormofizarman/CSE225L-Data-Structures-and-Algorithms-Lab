#include<iostream>

using namespace std;


struct Node {

    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
    private:
        struct Node* root;
    public:
        BinaryTree() {
            root = NULL;
        }
        Node* createNode(int);
        Node* insertNode(Node*, int);
        Node* deleteNode(Node*, int);
        void inOrder(Node*);
        void preOrder(Node*);
        void postOrder(Node*);
        Node* findMinimum(Node*);
        bool Search(int);
        Node* Search(Node * , int);
        void isempty(Node*);
        void deleteTree(Node*);
        int  size(Node*);

        Node* getRoot() {
            return root;
        }

        void setRoot(Node* ptr) {
            root = ptr;
        }
};

Node* BinaryTree :: createNode(int n) {
    Node* newNode = new struct Node();
    newNode->data = n;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* BinaryTree :: findMinimum(Node* rootPtr) {
    while(rootPtr->left != NULL) {
        rootPtr = rootPtr->left;
    }
    return rootPtr;
}

Node* BinaryTree :: insertNode(Node* rootPtr, int n) {
    if(rootPtr == NULL) {
        return createNode(n);
    }
    if(n < rootPtr->data) {
        rootPtr->left = insertNode(rootPtr->left, n);
    }
    if(n > rootPtr->data) {
        rootPtr->right = insertNode(rootPtr->right, n);
    }
    return rootPtr;
}

int BinaryTree :: size(Node* node)
{
    if (node == NULL)
        return 0;
    else
        return(size(node->left) + 1 + size(node->right));
}

Node * BinaryTree::Search(Node * node, int key)
{
    if (node == NULL)
        return NULL;
    else if(node->data == key)
        return node;
    else if(node->data < key)
        return Search(node->right, key);
    else
        return Search(node->left, key);
}

bool BinaryTree::Search(int key)
{
    Node * result = Search(root, key);
return result == NULL ?
false :
true;
}

void BinaryTree :: isempty(Node* rootPtr) {
     if(rootPtr == NULL)
        cout<<"Tree is empty"<<endl;
     else
        cout<<"Tree is not empty"<<endl;
}

void BinaryTree ::deleteTree(Node* node)
{
    if (node == NULL) return;

    deleteTree(node->left);
    deleteTree(node->right);

    delete node;
}

void BinaryTree :: inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void BinaryTree :: preOrder(Node* root) {
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void BinaryTree :: postOrder(Node* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main() {
    BinaryTree l1;
    int ch, ele, res;
    Node* ptr=NULL;
    l1.isempty(ptr);
    for(int i=0;i<17;i++)
    {
        cin>>ele;
        ptr=l1.insertNode(l1.getRoot(), ele);
        l1.setRoot(ptr);
    }

    l1.isempty(ptr);

    cout<<"Postorder: " ;
    l1.postOrder(l1.getRoot());
    cout<<endl;

    return 0;
}
