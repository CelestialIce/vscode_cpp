#include<iostream>

using namespace std;

struct node

{

int val;

node* next;

};
struct node* createList()

{
    struct node *head, *end, *normal;
    int x;
    cin>>x;
    if(x==-1){
        head=NULL;
        return head;
    }
    head=(struct node*)malloc(sizeof(node));
    head->val=x;
    end=head;
    while(cin>>x){
        if(x==-1)
            break;
        normal=(struct node*)malloc(sizeof(node));
        normal->val=x;
        end->next=normal;
        end=end->next;
    }
    end->next=NULL;

    return head;
}

struct node* reverseList(node* head)
{
    if(head){
    struct node* temp=head->next, *ltemp;
    head->next=NULL;
    while(temp){
        ltemp=head;
        head=temp;
        temp=head->next;
        head->next=ltemp;
        }
    return head;
    }
    else
        return NULL;

}

int main()

{

node* head = NULL;

head = createList();

node* head1 = NULL;

head1 = reverseList(head);

if (head1 == NULL)

{

cout << "-1 ";

}

else

{

node* p = head1;

while (p != NULL)

{

cout << p->val << " ";

p = p->next;

}

}

return 0;

}
