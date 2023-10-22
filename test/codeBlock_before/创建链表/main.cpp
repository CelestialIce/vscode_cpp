#include<iostream>
#include<cstdlib>

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

int main()

{

node* head = NULL;

head = createList();

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
