
#include<stdio.h>
#include<malloc.h>
struct Node
{
  int data;
  struct Node *next;
};

void push(Node** head_ref, int new_data)
{
 
    // 1. allocate node
    Node* new_node = new Node();
 
    // 2. put in the data
    new_node->data = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_node;
}
int main()
{
‎   int ch=0,n;
‎
‎   while (ch!=5)
‎   {   
‎       printf("\n---Linked List Operations---");
‎       printf("\n1.beginning \n2.last 3.at random place \n4.Display List \n5.Exit\n");
‎       printf("\nEnter your choice : ");
‎       scanf("%d", &ch);
       printf("\nEnter the number of elements : ");
‎       scanf("%d",&n);
‎       switch (ch)
‎       {
‎       case 1:
‎           void push(Node** head_ref, int new_data);
‎           
‎           break;



‎       case 4: 
‎           printf("\nElements in the list are : ");
‎           display();
‎           break;
‎       case 3:
‎           printf("Exiting...");
‎           break;
‎       default: 
‎           printf("\nInvalid Choice\n");
‎           break;
‎       }
‎   }
‎   return 0;
}
void display()
{
‎   if (first == NULL)
‎   {
‎       printf("\nNo nodes in the list to display\n");
‎   }
‎   else
‎   {
‎       for (ptr = first;ptr != NULL;ptr = ptr->next)
‎       {    
‎           printf("  %d  ", ptr->value);
‎       }
‎   }
}
