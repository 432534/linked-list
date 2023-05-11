#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *first = NULL;

void input()
{
    node *p = new node;
    cin >> p->data;

    if (first == NULL)
    {
        p->next = NULL;
        first = p;
    }
    else
    {
        node *j = first;
        while (j->next != NULL)
        {

            j = j->next;
        }
        j->next = p; 
        p->next = NULL;
    }
}
void display()
{
    node *p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void insert()
{
    node *p = first;
    node *k = first->next;
    node *t = NULL;
    while (k != NULL)
    {
        if (p->data == k->data)
        {
            node *l = new node;

            if (k->next == NULL)
            {
                l->data = t->data;
            }
            else if (t == NULL)
            {
                l->data = k->next->data;
            }
            else
            {

                l->data = t->data + k->next->data;
            }
            p->next = l;
            l->next = k;
        }
        t = p;
        p = k;
        k = k->next;
    }
}
int main()
{
    int n;
    cin >> n;
    if (n > 5 && n < 10)
    {
        for (int i = 0; i < n; i++)
            input();
        insert();
        display();
    }
    else
        cout << "Invalid Input";
}