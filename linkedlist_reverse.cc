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
void reverse(Node *&head)
{
    Node *current = head;
    Node *pre = NULL;
    while(current != NULL)
    {
        Node *next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    head = pre;
}
int main()
{
     Node *head = NULL;
     insert(head,1,1);
     insert(head,2,2);
     insert(head,3,3);
     insert(head,4,4);
     print(head);
     reverse(head);
     print(head);
     return 0;
}