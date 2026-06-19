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
ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }

    ListNode *temp = reverseList(head->next);

    if (temp == NULL)
    {
        temp = head;
    }
    else
    {
        ListNode *temp2 = temp;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = head;
        head->next = NULL;
    }

    return temp;
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
    head=reverseList(head);
    display(head);
}