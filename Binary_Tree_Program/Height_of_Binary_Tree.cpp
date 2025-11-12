// C++ program to find height of tree
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

// Function to calculate Height of tree 
int maxDepth(node* node)
{
    if (node == nullptr)
        return 0;
   
       
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        
        if (lDepth > rDepth)
            return lDepth + 1;
        else
            return rDepth + 1;    
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

    cout << "Height of tree is :" << maxDepth(root);
    cout << endl;
    return 0;
}



