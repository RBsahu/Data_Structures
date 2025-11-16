// count leaf nodes of a binary tree
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

//count leaf nodes of a binary tree
int getLeafCount(node* node)
{
    if (node == nullptr)
        return 0;

    if (node->left == nullptr && node->right == nullptr)
        return 1;
    else
        return getLeafCount(node->left) +
               getLeafCount(node->right);
}

// create a new node
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = nullptr;
    Node->right = nullptr;

    return Node;
}

// Driver code
int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);    

    cout << " Count of Leaf node is : " << getLeafCount(root) << endl;
    cout << endl;
    return 0;
}



