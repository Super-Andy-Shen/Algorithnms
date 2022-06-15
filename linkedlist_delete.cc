#include<iostream>
#include<algorithm>
using namespace std;

struct Node
{
   int value;
   Node *next;
};
void insert(Node *&head,int n,int data)
{
     Node *tmp = new Node();
     tmp->value = data;
     tmp->next = NULL;
     if(n == 1)
     {
         tmp->next = head;
         head = tmp;
         return;
     }
    Node *current = head;
     for(int i = 0;i < n - 2;i++)
     {
         current = current->next;
     }
     tmp->next = current->next;
     current->next = tmp;
}
void print(Node *head)
{
   while(head != NULL)
   {
       cout << head->value <<" ";
       head = head->next;
   }
   cout<<endl;
}
void del(Node *&head,int n)
{
    Node *tmp = head;
    if(n == 0)
    {
        head = tmp->next;
        delete tmp;
        return;
    }
    else
    {
        for(int j = 0; j < n - 1 ; j++)
        {
            tmp = tmp->next;
        }
        Node *n_node = tmp->next;
        tmp->next = n_node->next;
        delete tmp;
    }
}
int main()
{
     Node *head = NULL;
     insert(head,1,1);
     insert(head,2,2);
     insert(head,3,3);
     insert(head,4,4);
     print(head);
     del(head,0);
     print(head);
     return 0;
}