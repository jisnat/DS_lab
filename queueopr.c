 
#include<stdlib.h>
#include<stdio.h>
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,maxsize;
int queue[100];
int main()
{
int choice;
printf("Enter the size of queue:");
scanf("%d",&maxsize);
printf("\nQUEUE OPERATIONS");
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
while(choice!=4)
{
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("Please enter a valid choice");
}
}
return 0;
}
void enqueue()
{
int item;
printf("Enter the element:");
scanf("%d",&item);
if(rear==maxsize-1)
{
printf("overflow");
return;
}
if(front==-1&&rear==-1)
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
queue[rear]=item;
printf("value inserted");
}
void dequeue()
{
int item;
if(front==-1 || front>rear)
{
printf("underflow");
return;
}
else
{
item=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
printf("value deleted");
}
}
void display()
{
int i;
if(rear==-1)
{
printf("Empty queue");
}
else{
printf("Elements in the queue are:");
for(i=front;i<=rear;i++)
{
printf("%d ",queue[i]);
}
}
}

