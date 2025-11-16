// C++ program to print left view of Binary Tree
// Create binary tree
    //         1
    //       /  \
    //      2     3
    //     / \   /  \
    //   4    5 7    6
    //         / 
    //        8  
	// The left view of the above binary tree is 1 2 4 8  


#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node * right;
};

struct Node* newNode(int item)
{
    Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Recursive function to print  left view
void leftViewUtil(struct Node* root, int level, int* max_level)
{
    if (root == NULL)
        return;

    // If this is the first Node of its level
    if (*max_level < level) 
    {
        cout << root->data << " ";
        *max_level = level;
    }

    leftViewUtil(root->left, level + 1, max_level);
    leftViewUtil(root->right, level + 1, max_level);
}


void leftView(struct Node* root)
{
    int max_level = 0;
    leftViewUtil(root, 1, &max_level);
}


int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    root->right->left = newNode(7);
    root->right->right->left = newNode(8);
     

    cout << "Print Left View of a Binary Tree :";
    leftView(root);
    cout << endl;

    return 0;
}

