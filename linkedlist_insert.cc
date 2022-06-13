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

int main()
{
     Node *head = NULL;
     insert(head,1,2);
     insert(head,2,3);
     while(head != NULL)
     {
         cout << head->value <<" ";
         head = head->next;
     }
    
     cout<< endl;
     return 0;
}