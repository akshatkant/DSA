#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    struct node *next; 

};

struct node *head=0, *newnode;
typedef struct node node;

node *getnode()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter data"<<endl;
    cin>>newnode->data;
    newnode->next=0;
    return newnode;

}

void insert_beg()
{
    node *n;
    n=getnode();

    if(head==0)
    {
        cout<<"Linked List"<<endl;
    }

    else
    {
        n->next=head;
        head=n;

    }
}

void insert_end()
{
    node *n,*temp=head;
    n=getnode();
    while(temp->next!=0)
    {
        temp=temp->next;   
    }
    temp->next=n;   
}

void delete_beg()
{
    node *temp=head;
    if(head==NULL)
    {
        cout<<"Linked list empty";
    }
    else
    {
        head=head->next;
        cout<<"The item deleted will be "<<temp->data;
        free(temp);
    }
}

void delete_end()
{
    node *temp=head,*prevnode;
    if(head==NULL)
    {
        cout<<"Linked List empty";
    }

    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }

    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else
    {
        prevnode->next=0;
        free(temp);
    }

}

void display()
{
    node *temp=head;
    if(head==0)
    {
        cout<<"Empty";
    }
    else
    {
        while(temp->next!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;

        }
        cout<<temp->data<<endl;

    }
}

int main()
{
    int num;
    while(1)
    {
        cout<<"1.Insert_Beg\n"<<"2.Insert_end\n"<<"3.Delete_beg\n"<<"4.Delete_end\n"<<"Display\n"<<endl;
        cin>>num;
        switch(num)
        {
            case 1: insert_beg();
            break;

            case 2: insert_end();
            break;

            case 3: delete_beg();
            break;

            case 4: delete_end();
            break;

            case 5: display();
            break;
        }
    }
}