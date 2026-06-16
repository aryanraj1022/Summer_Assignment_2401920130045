#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void display(ListNode *head)
{
    if (head == NULL)
        return;
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *insertAtBegin(ListNode *head, int val)
{
    ListNode *temp = new ListNode(val);
    temp->next = head;
    return temp;
}
bool isPalindrome(ListNode *head)
{
    stack<int> stc;
    ListNode *temp = head;
    vector<int> num;
    int count = 0;
    if (head == NULL)
    {
        return true;
    }
    if (head->next == NULL)
    {
        return true;
    }
    while (temp != NULL)
    {
        num.push_back(temp->val);
        temp = temp->next;
    }
    reverse(num.begin(), num.end());
    int i = 0;
    while (head != NULL)
    {
        if (head->val != num[i])
        {
            return false;
        }
        head = head->next;
        i++;
    }
    return true;
}
int main()
{
    int n;
    cout << "enter the number of List: ";
    cin >> n;
    ListNode *head = NULL;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        head = insertAtBegin(head, a);
    }
    display(head);
    cout << "enetr the remove node place: ";
    int a;
    cin >> a;
    cout<<isPalindrome(head)<<endl;
}