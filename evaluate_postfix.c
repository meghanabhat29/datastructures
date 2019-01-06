#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 30
int s[size],top=-1,m;
int is_operand(char item)
{
    if(item>='A'&&item<='Z'||item>='a'&&item<='z')
    return 1;
    else
    return 0;
}
void push(int m)
{
    s[++top]=m;
}
int pop()
{
    int ditem=s[top];
    top--;
    return ditem;
}
void main()
{
    char postfix[30],item;
    int i=0,op1,op2,r;
    printf("Enter the postfix expression : ");
    scanf("%s",postfix);
    while(postfix[i]!='\0')
    {
        item=postfix[i];
        if(is_operand(item)==1)
        {
            printf("Enter the value for %c : ",item);
            scanf("%d",&m);
            push(m);
        }
        else
        {
            op2=pop();
            op1=pop();
            switch(item)
            {
                case '^':r=pow(op1,op2);
                push(r);
                break;
                case '/':r=op2/op1;
                push(r);
                break;
                case '*':r=op2*op1;
                push(r);
                break;
                case '+':r=op2-op1;
                push(r);
                break;
                case '-':r=op2-op1;
                push(r);
                break;
                case '%':r=op2%op1;
                push(r);
                break;
            }
        }
        i++;
    }
    r=pop();
    printf("The result of the expression is %d",r);
}
