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
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *head = NULL;
    ListNode *temp;
    if (list1 == NULL && list2 == NULL)
    {
        return head;
    }
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    while (list1 != NULL && list2 != NULL)
    {

        if (head == NULL)
        {
            if (list1->val > list2->val)
            {
                head = list2;
                temp = head;
                list2 = list2->next;
            }
            else
            {
                head = list1;
                temp = head;
                list1 = list1->next;
            }
        }
        else
        {
            if (list1->val > list2->val)
            {
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
            else
            {
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }
        }
    }
    if (list1 != NULL)
    {
        temp->next = list1;
    }
    if (list2 != NULL)
    {
        temp->next = list2;
    }
    return head;
}
int main()
{
    int n;
    cout << "enter the number of List: ";
    cin >> n;
    ListNode *list1 = NULL;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        list1 = insertAtBegin(list1, a);
    }
    display(list1);
    ListNode *list2 = NULL;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        list2 = insertAtBegin(list2, a);
    }
    display(list2);
    ListNode* head=mergeTwoLists(list1,list2);
    display(head);
}