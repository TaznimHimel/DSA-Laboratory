#include <iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST
{
private:
    TreeNode *root;

public:
    BST() : root(nullptr) {}

    // Helper function to insert a value recursively
    TreeNode *insertRecursive(TreeNode *current, int value)
    {
        if (current == nullptr)
        {
            return new TreeNode(value);
        }

        if (value < current->data)
        {
            current->left = insertRecursive(current->left, value);
        }
        else if (value >= current->data)
        {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

    // Public function to insert a value into the BST
    void insert(int value)
    {
        root = insertRecursive(root, value);
    }

    // Function to display the BST in-order
    void inorderTraversal(TreeNode *current)
    {
        if (current != nullptr)
        {
            inorderTraversal(current->left);
            cout << current->data << " ";
            inorderTraversal(current->right);
        }
    }

    void displayInorder()
    {
        inorderTraversal(root);
        cout << endl;
    }
};

int main()
{
    BST bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    cout << "In-order traversal of the BST: ";
    bst.displayInorder();

    return 0;
}
