#include <stdio.h>
#include<stdio.h>
#define size 30
void push(int item,int *s,int *top)
{
    if((*top)==size-1)
    printf("The stack is full\n");
    else
    {
       (*top)++;
        s[*top]=item;
    }
}
void pop(int *s,int *top)
{
    if((*top)==-1)
    printf("The stack is empty\n");
    else
    {
        int ditem=s[*top];
        printf("%d is deleted from the stack.",ditem);
        (*top)--;
    }
}
void display(int *s,int top)
{
    if(top==-1)
    printf("The stack is empty\n");
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d-->",s[i]);
        }
    }
}
void main()
{
    int ch,item,top=-1,s[size];
    while(1)
    {
        printf("\n Enter\n 1:Push\n 2:Pop\n 3:Display\n 4:Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the item : ");
                    scanf("%d",&item);
                    push(item,s,&top);
            break;
            case 2:pop(s,&top);
            break;
            case 3:display(s,top);
            break;
            case 4:exit(1);
        }
    }
}
