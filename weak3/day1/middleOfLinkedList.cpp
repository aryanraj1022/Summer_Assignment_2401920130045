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
ListNode *middleNode(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int x = count / 2;
    while (x > 0)
    {
        head = head->next;
        x--;
    }
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
    head=middleNode(head);
    display(head);
}
