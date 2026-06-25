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
int max1 = -1;
int helper(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int left = 1 + helper(root->left);
    int right = 1 + helper(root->right);
    max1 = max(left + right - 2, max1);
    return max(left, right);
}
int diameterOfBinaryTree(TreeNode *root)
{
    helper(root);
    return max1;
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
    cout<<diameterOfBinaryTree(root)<<endl;

    return 0;
}