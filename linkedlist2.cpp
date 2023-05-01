#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
}*first=NULL;
void create(int A[],int n)
{   
    node*t,*last;
    first = new node;
    first->next=NULL;
    first->data=A[0];
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        last->next=t;
        t->next=NULL;
        last=t;
    }
}

void display(int A[],int n)
{
    node *p=first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

}
int main()
{
    int A[]={4,5,6,7,3,4,5};
    create(A,7);
    display(A,7);
}