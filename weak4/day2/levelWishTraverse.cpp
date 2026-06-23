#include <iostream>
#include <map>
#include <vector>
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
map<int, vector<int>> mp;
vector<vector<int>> ans;
void helper(TreeNode *root, int ind)
{
    if (root == NULL)
        return;
    if (mp.find(ind) == mp.end())
    {
        vector<int> x = {root->val};
        mp[ind] = x;
    }
    else
    {
        mp[ind].push_back(root->val);
    }
    helper(root->left, ind + 1);
    helper(root->right, ind + 1);
}
vector<vector<int>> levelOrder(TreeNode *root)
{
    helper(root, 0);
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
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
    levelOrder(root);
    for(int i=0;i<ans.size();i++){
       for(int j:ans[i]){
        cout<<i<<" ";
       }
       cout<<endl;
    }
    return 0;
}