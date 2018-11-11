#include <stdio.h>
#include<stdlib.h>
#define size 30
int s[size],top=-1,item,ditem,i;
void push()
{
    if(top==size-1)
        printf("The stac is full");
    else
    {
        printf("Enter the item : ");
        scanf("%d",&item);
        s[top++]=item;
    }
}
void pop()
{
    if(top==-1)
        printf("The stack is empty\n");
    else
    {
        ditem=s[top];
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("%d-->",s[i]);
        }
    }
}
void peek()
{
    if(top==-1)
    printf("There is no element in the stack.");
    else
    {
        printf("The topmost element of the stack is %d",s[top]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\nEnter\n 1:Push\n 2:Pop\n 3:Display\n 4:To retrieve the top-most element\n 5:Exit\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            case 5:exit(0);
            
            
        }
    }
}
