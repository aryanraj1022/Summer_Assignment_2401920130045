#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = right = nullptr;
    }
};

TreeNode *insert(TreeNode *root, int key)
{
    if (root == nullptr)
        return new TreeNode(key);

    if (key < root->val)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}


void inorder(TreeNode *root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    TreeNode *root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);
   
    return 0;
}