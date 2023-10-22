#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* creat_list()
{
    int x;
    cin >>x;
    if(x==-1)
        return NULL;
    struct ListNode *head, *end, *normal;
    head=(struct ListNode*)malloc(sizeof(ListNode));
    head->val=x;
    end=head;
    while(cin>>x){
        if(x==-1)
            break;
        normal=(struct ListNode*)malloc(sizeof(ListNode));
        normal->val=x;
        end->next=normal;
        end=end->next;
    }
    end->next=NULL;

    return head;
};

struct ListNode* return_middle(struct ListNode* head)
{
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
};

struct ListNode* find_kth_to_tail(struct ListNode *head, int k)
{
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    while(k--){
        fast=fast->next;
    }
    while(fast!=nullptr)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
};

int main()
{
    struct ListNode *head, *p;
    head=creat_list();
    cout<<"Please enter the k"<<endl;
    int k;
    cin>>k;
    cout<<find_kth_to_tail(head,k)->val<<endl;
    cout<<"return the middle number of the list"<<endl;
    cout<<return_middle(head)->val<<endl;


    return 0;
}
