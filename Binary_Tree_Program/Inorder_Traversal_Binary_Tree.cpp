//Inorder Traversal of Binary Tree
// Create binary tree
//       1
//      /  \
//    2     3
//   / \     \
//  4   5     6

/*
    Inorder Traversal (Left -> Root -> Right).
    Output -  4 2 5 1 3 6.
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

// print inorder 
void printInorder(Node* node)
{
    if (node == NULL)
        return;

    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
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

    cout << "Inorder traversal of binary tree : \n";
    printInorder(root);
    
    cout << endl;
    return 0;
}

