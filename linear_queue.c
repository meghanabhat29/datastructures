
#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=-1,rear=-1,item,ditem,queue[size];
void enqueue()
{
    if(rear==size-1)
    printf("Overflow\n");
    else
    {
        if(rear==-1)
        front=0;
        printf("Enter the item : ");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}
void dequeue()
{
    if(rear==-1)
    printf("The queue is empty\n");
    else if(front==rear)
    {
        ditem=queue[front];
        front=-1;
        rear=-1;
    }
    else
    {
        ditem=queue[front];
        front++;
    }
}
void display()
{
    int i;
    if(rear==-1)
    printf("the queue is empty\n");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d-->",queue[i]);
        }
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("Enter\n 1:Enqueue\n 2:Dequeue\n 3:Display\n 4:Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            
        }
    }
}
