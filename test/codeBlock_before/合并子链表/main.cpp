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

ListNode* mergeNodes(ListNode* head)

{
    struct ListNode *phead=nullptr, *end=nullptr, *normal=nullptr;
    int sum=0;
    struct ListNode *cur=head;
    while(cur->next!=nullptr)
    {
        if(cur->val==0){
            cur=cur->next;
            continue;
        }
        sum=0;
        while(cur->val!=0){
            sum+=cur->val;
            cur=cur->next;
        }
        normal=(struct ListNode*)malloc(sizeof(ListNode));
        normal->val=sum;
        if(phead==nullptr){
            phead=normal;
            end=phead;
        }
        else if(phead!=nullptr){
            end->next=normal;
            end=end->next;
        }
    }
    end->next=nullptr;
    return phead;
}

int main()

{

ListNode* head;

head = createList();

ListNode* ans = mergeNodes(head);

while (ans != NULL)

{

cout << ans->val << " ";

ans = ans->next;

}

return 0;

}
