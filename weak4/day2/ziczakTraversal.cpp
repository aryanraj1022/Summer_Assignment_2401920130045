#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
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
map<int, vector<int>> mp;
void helper(TreeNode *root, int ind)
{
    if (root == NULL)
        return;
    mp[ind].push_back(root->val);
    helper(root->left, ind + 1);
    helper(root->right, ind + 1);
}

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    int count = 0;
    helper(root, 0);
    for (auto it : mp)
    {
        if (count == 0)
        {
            ans.push_back(it.second);
            count = 1;
        }
        else
        {
            reverse(it.second.begin(), it.second.end());
            ans.push_back(it.second);
            count = 0;
        }
    }
    return ans;
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
    vector<vector<int>>a=zigzagLevelOrder(root);
    for(int i=0;i<a.size();i++){
       for(int j:a[i]){
        cout<<i<<" ";
       }
       cout<<endl;
    }

    return 0;
}