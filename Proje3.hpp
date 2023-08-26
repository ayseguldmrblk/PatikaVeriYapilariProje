#include <iostream>
using namespace std;

class TreeNode
{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {} //initialization list
};

class BinarySearchTree
{
    private:
        TreeNode *root;
        TreeNode *insert(TreeNode *node, int data)
        {
            if (node == nullptr)
            {
                return new TreeNode(data);
            }

            if (data < node->data)
            {
                node->left = insert(node->left, data);
            }
            else if (data > node->data)
            {
                node->right = insert(node->right, data);
            }

            return node;
        }

        void inOrderTraversal(TreeNode *node)
        {
            if (node == nullptr)
            {
                return;
            }

            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }

    public:
        BinarySearchTree() : root(nullptr) {}
        void insert(int data)
        {
            root = insert(root, data);
        }
        void inOrder()
        {
            inOrderTraversal(root);
            cout << endl;
        }
};

void project3_main()
{
    BinarySearchTree bst;
    bst.insert(7);
    bst.inOrder();
    bst.insert(5);
    bst.inOrder();
    bst.insert(1);
    bst.inOrder();
    bst.insert(8);
    bst.inOrder();
    bst.insert(3);
    bst.inOrder();
    bst.insert(6);
    bst.inOrder();
    bst.insert(0);
    bst.inOrder();
    bst.insert(9);
    bst.inOrder();
    bst.insert(4);
    bst.inOrder();  
    bst.insert(2);
    bst.inOrder();
}
