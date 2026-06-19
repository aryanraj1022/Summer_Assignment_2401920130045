#include <iostream>
#include <vector>
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
bool hasCycle(ListNode *head)
{
    ListNode *temp = head;
    ListNode *temp1 = head;
    if (head == NULL)
        return false;
    if (head->next == NULL)
    {
        return false;
    }
    while (temp1 != NULL)
    {
        if (temp1 == NULL)
            return false;
        if (temp1->next == NULL)
            return false;
        if (temp1->next->next == NULL)
            return false;
        temp = temp->next;
        temp1 = temp1->next->next;
        if (temp == temp1)
        {
            return true;
        }
    }
    return false;
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
    cout << hasCycle(head);
}