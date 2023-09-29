#include <iostream>
#include <cmath>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
int getHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}
bool isPerfectBinaryTree(Node *root)
{
    int height = getHeight(root);
    int expectedNodes = pow(2, height) - 1;
    int actualNodes = 0;
    // Count the number of nodes in the binary tree
    // You can use a simple traversal (e.g., inorder) to count nodes
    // We are assuming that a function to count nodes is available

    // Compare the actual and expected number of nodes
    return (expectedNodes == actualNodes);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    if (isPerfectBinaryTree(root))
    {
        cout << "The binary tree is a perfect binary tree." << endl;
    }
    else
    {
        cout << "The binary tree is not a perfect binary tree." << endl;
    }

    return 0;
}