#include<stdlib.h>
#include <stdio.h>
     
void display();
void insert_begin();
void insert_end();
void insert_pos();

 
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()     
{
        int choice;
        while(1){
               
                printf("Linkedlist Insertion");
                printf("\n 1.Display");
                printf("\n 2.Insert at the beginning");
                printf("\n 3.Insert at the end");
                printf("\n 4.Insert at specified position");
                
                printf("\n 5.Exit");
                printf("\n------------------------------------");
                printf("\nEnter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                       
                        case 1:
                                        display();
                                        break;
                        case 2: 
                                        insert_begin();
                                        break;
                        case 3:
                                        insert_end();
                                        break;
                        case 4:
                                        insert_pos();
                                        break;
                        
                        case 5:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}

void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:n");
                return;
        }
        else
        {
                ptr=start;
                printf("The List elements are: ");
                while(ptr!=NULL)
                {
                        printf("%d ",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:");
                return;
        }
        printf("\nEnter the data value for the node:" );
        scanf("%d ",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:n");
                return;
        }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:");
        scanf("%d",&temp->info) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found:[Handle with care]");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}

