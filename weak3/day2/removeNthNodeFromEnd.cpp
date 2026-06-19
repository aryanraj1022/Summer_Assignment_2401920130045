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
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL && n == 1)
    {
        head = NULL;
    }
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    count = count - n;
    int i = 1;
    temp = head;
    while (i < count)
    {
        temp = temp->next;
        i++;
    }
    if (count == 0)
    {
        return head->next;
    }
    if (temp == NULL)
    {
        return head;
    }
    ListNode *temp1 = temp->next->next;
    temp->next = temp1;
    return head;
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
    head=removeNthFromEnd(head,a);
    display(head);
}