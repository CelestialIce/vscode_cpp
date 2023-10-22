#include <iostream>

using namespace std;

struct ListNode

{

int val;

ListNode* next;

};

ListNode* createList()

{

ListNode* head = NULL;

ListNode* p1, * p2;

p1 = new ListNode;

p2 = p1;

cin >> p1->val;

while (p1->val != -1)

{

if (head == NULL)

head = p1;

else p2->next = p1;

p2 = p1;

p1 = new struct ListNode;

cin >> p1->val;

}

p2->next = NULL;

delete p1;

return head;

}

ListNode* oddEvenList(ListNode* head) {

        // write code here
        if(head == NULL)
            return NULL;
        struct ListNode* lessHead,*lessTail;
        lessHead = lessTail = (ListNode*)malloc(sizeof(ListNode));

        struct ListNode* greaterHead,*greaterTail;
        greaterHead = greaterTail = (ListNode*)malloc(sizeof(ListNode));

        struct ListNode* cur = head;
        int n=1;
        while(cur)
        {
            if(n%2==1)
            {
                lessTail->next = cur;
                lessTail = cur;
            }
            else
            {
                greaterTail->next = cur;
                greaterTail = cur;
            }
            cur = cur->next;
            n++;
        }
        if(n==2)
            return head;
        lessTail->next = greaterHead->next;
        greaterTail->next = NULL;
        struct ListNode* ret = lessHead->next;
        free(lessHead);
        free(greaterHead);
        return ret;


}

int main()

{

ListNode* head;

head = createList();

ListNode* ans = oddEvenList(head);

if (ans == NULL)

cout << "-1";

else

{

while (ans != NULL)

{

cout << ans->val << " ";

ans = ans->next;

}

}

return 0;

}
