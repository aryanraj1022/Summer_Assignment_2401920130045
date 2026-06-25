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
int x = 1;

void helper(TreeNode *root, int targetsum, int sum)
{

    if (root == NULL)
    {
        return;
    }

    helper(root->left, targetsum, sum + root->val);
    helper(root->right, targetsum, sum + root->val);
    if ((sum + root->val) == targetsum && root->left == NULL && root->right == NULL)
    {
        x = 0;
    }
}
bool hasPathSum(TreeNode *root, int targetSum)
{
    if (targetSum == 0 && root == NULL)
    {
        return false;
    }
    helper(root, targetSum, 0);
    if (x == 0)
        return true;
    return false;
}


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
    cout<<hasPathSum(root,50)<<endl;

    return 0;
}