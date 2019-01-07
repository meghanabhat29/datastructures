#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int top=-1;
int stack[30];
void push(int item)
{
    stack[++top]=item;
}
int pop()
{
    return stack[top--];
}
void main()
{
    char postfix[30],item;
    int i=0,m,op1,op2,res;
    printf("Enter the postfix expression : ");
    scanf("%s",postfix);
    while(postfix[i]!='\0')
    {
        item=postfix[i];
        if(isalnum(item))
        {
            printf("Enter the value for %c",item);
            scanf("%d",&m);
            push(m);
        }
        else
        {
            op2=pop();
            op1=pop();
            switch(item)
            {
                case '*':res=op1*op2;
                push(res);
                break;
                case '/':res=op1/op2;
                push(res);
                break;
                case '+':
                res=op1+op2;
                push(res);
                break;
                case '-':
                res=op1-op2;
                push(res);
                break;
                case '^':
                res=pow(op2,op1);
                push(res);
                break;
            }
        }
        i++;
    }
    printf("The result is %d",res);
}
