# linked-list
 #include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *first = NULL;
void add(int n)
{
    node *p = new node;
     p->data=n;
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
    int count = 0;
    node *p = first;
    while (p!= NULL)
    {
        if(p->data % 2 !=0 ){
            count=count+1;
            }
            p=p->next;
        }
       if(count!=0)
    cout << count;
    else
    cout << "No odd number present";
}
int main()
   
{   int n;
    while(true){
        cin>>n;
        if(n==-1)
            break;
        else 
        add(n);
    }
    display();

}

