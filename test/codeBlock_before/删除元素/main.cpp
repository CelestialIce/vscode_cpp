#include<iostream>

using namespace std;

struct node

{

int val;

node* next;

};

node* createList()

{
    struct node *head, *normal, *end;
    head=(struct node*)malloc(sizeof(node));
    int x;
    cin>>x;
    if(x==-1){
        head=NULL;
        return head;
    }
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

node* deleteElements(node* head, int v)

{
    if(head==NULL)
        return NULL;
    while(head){
        if(head->val==v)
            head=head->next;
        else
            break;
    }
    if(head==NULL)
        return NULL;
    struct node*temp2=head->next, *temp1=head;
    while(temp2){
        if(temp2->val==v){
            temp1->next=temp2->next;
            delete temp2;
            temp2=temp1->next;
        }
        else{
            temp1=temp2;
            temp2=temp2->next;
        }
    }
    return head;
}
node* deleteElement(struct node* head, int x)
{
    if(head==NULL)
        return head;
        struct node *p=head;
    if(x==1)
        head=head->next;
    else{
        for(int i=2;i<x;i++){
            p=p->next;
        }
        if(p->next!=NULL)
            p->next=p->next->next;
        }


    return head;
}

int main()

{

node* head = NULL;

head = createList();

int v;

cin >> v;

head = deleteElement(head, v);

if (head == NULL)

{

cout << "-1 ";

}

else

{

node* p = head;

while (p != NULL)

{

cout << p->val << " ";

p = p->next;

}

}

return 0;

}
