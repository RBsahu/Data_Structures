//Preorder Traversal of Binary Tree
// Create binary tree
//       1
//      /  \
//    2     3
//   / \     \
//  4   5     6

/*
*   Preorder Traversal (Root -> Left -> Right)   
    Output -  1 2 4 5 3 6.
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }
};

// print preorder 
void printPreorder(Node* node)
{
    if (node == NULL)
        return;
  
    cout << node->data << " ";
    printPreorder(node->left); 
    printPreorder(node->right);
}

// Driver code
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Preorder traversal of binary tree is: \n";
    printPreorder(root);
    
    cout << endl;
    return 0;
}

