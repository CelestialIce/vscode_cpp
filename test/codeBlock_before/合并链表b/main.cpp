#include <iostream>

using namespace std;

struct node

{

int val;

node* next;

};

node* createList()

{
    struct node *head, *end, *normal;
    int x;
    cin>>x;
    if(x==-1)
        return NULL;
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

node* merge(node* head1, node* head2)

{
    struct node *head=NULL, *end=NULL, *normal=NULL;


    while(head1!=NULL&&head2!=NULL){
        normal=(struct node*)malloc(sizeof(node));
        if(head1->val<head2->val){
            normal->val=head1->val;
            head1=head1->next;
        }
        else{
            normal->val=head2->val;
            head2=head2->next;
        }
            if(head==NULL){
                head=normal;
                end=head;
            }
            else{
                end->next=normal;
                end=end->next;
            }

        }

    if(head1!=NULL){
        if(head==NULL)
            head=head1;
        else
            end->next=head1;
    }
    else if(head2!=NULL){
        if(head==NULL)
            head=head2;
        else
            end->next=head2;
    }
    return head;

}

int main()

{

node *head1, *head2, *head3;

head1 = createList();

head2 = createList();

head3 = merge(head1, head2);

if (head3 == NULL)

{

cout << "-1 ";

}

else

{

node* p = head3;

while (p != NULL)

{

cout << p->val << " ";

p = p->next;

}

}

return 0;
}
