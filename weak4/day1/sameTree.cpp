
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
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL || q == NULL)
    {
        return p == q;
    }
    bool left_rt = isSameTree(p->left, q->left);
    bool right_rt = isSameTree(p->right, q->right);
    return left_rt && right_rt && p->val == q->val;
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
    cout<<endl;
    cout<<isSameTree(root,root)<<endl;

    return 0;
}