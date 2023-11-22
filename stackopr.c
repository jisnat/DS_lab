#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
struct Stack{
int items[MAX_SIZE];
int top;
};
void initialize(struct Stack*stack){
stack->top=-1;
}
int isEmpty(struct Stack*stack){
return (stack->top==-1);
}
int isFull(struct Stack*stack){
return (stack->top == MAX_SIZE-1);
}
void push(struct Stack*stack,int item){
if(isFull(stack)){
printf("stack is full.Can not push %d\n",item);
}
}
void pop(struct Stack*stack){
if(isEmpty(stack)){
printf("stack is empty.can not pop\n");
}else{
printf("%d popped from the stack\n",stack->items[stack->top--]);
}
}
void peek(struct Stack*stack){
if(isEmpty(stack)){
printf("stack is empty. can not peek\n");
}
else{
printf("Top item is %d\n",stack->items[stack->top]);
}
}
void display(struct Stack*stack){
if(isEmpty(stack)){
printf("Stack is empty\n");
}
else{
printf("satck element:");
for(int i=0;i<=stack->top;i++){
printf("%d",stack->items[i]);
}
printf("\n");
}
}
int main(){
struct Stack stack;
initialize (&stack);
int choice,item;
do{
printf("\nstack operations:\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.quit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter an item to push onto the stack :");
scanf("%d",&item);
push(&stack,item);

break;
case 2:
pop(&stack);
break;
case 3:
peek(&stack);
break;
case 4:
display(&stack);
break;
case 5:
printf("Exicting the program \n");
exit(0);
default:
printf("Invalid choice.please try again\n");
}
}
while(1);
return 0;
}

