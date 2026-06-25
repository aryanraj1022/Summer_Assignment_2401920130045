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
int ans = INT_MIN;

int dfs(TreeNode *root)
{
    if (!root)
        return 0;

    int left = max(0, dfs(root->left));
    int right = max(0, dfs(root->right));

    ans = max(ans, left + right + root->val);

    return root->val + max(left, right);
}

int maxPathSum(TreeNode *root)
{
    dfs(root);
    return ans;
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
    cout<<maxPathSum(root)<<endl;

    return 0;
}