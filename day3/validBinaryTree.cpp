#include <iostream>
#include<climits>
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
bool helper(TreeNode *node, long low, long high)
{
    if (node == nullptr)
        return true;

    if (node->val <= low || node->val >= high)
        return false;

    return helper(node->left, low, node->val) &&
           helper(node->right, node->val, high);
}
bool isValidBST(TreeNode *root)
{
    return helper(root, LONG_MIN, LONG_MAX);
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
    cout<<endl;
    cout<<isValidBST(root)<<endl;

    return 0;
}