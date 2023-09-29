#include <bits/stdc++.h>
using namespace std;
// Setting up a Structure Function
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
// Function for Pre-Order
void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// Function for In-Order
void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Inorder call root to left
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// Function for Post-Order
void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Postorder call root to left
    postorder(root->left);
    // Postorder call root to right
    postorder(root->right);
    cout << root->data << " ";
}
// Main function
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // Function Calling for Pre-Order
    cout << "Pre-Order: ";
    preorder(root);
    // Function Calling for In-Order
    cout << "\n";
    cout << "In-Order: ";
    inorder(root);
    // Function Calling for Post-Order
    cout << "\n";
    cout << "Post-Order: ";
    postorder(root);
    return 0;
}

