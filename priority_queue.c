#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1,queue[size];
void enqueue(int item)
{
    int i,j;
    if(rear==size-1)
    {
        printf("The queue is full\n");
    }
    else if(rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else if(item>queue[rear])
    {
        queue[++rear]=item;
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            if(item<queue[i])
            {
                for(j=rear;j>=i;j--)
                {
                    queue[j+1]=queue[j];
                }
                queue[i]=item;
                rear++;
                return;
            }
        }
    }
}
void dequeue()
{
  if(rear==-1)
  {
    printf("The queue is empty\n");
  }
  else
  {
      int ditem=queue[front];
      printf("%d is now removed from the stack\n",ditem);
      if(front==rear)
      {
        front=-1;
        rear=-1;
      }
      else
      {
        front=front+1;
      }
    }
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("Empty\n");
    }
        else
        {
            for(int i=front;i<=rear;i++)
            printf("%d-->",queue[i]);
        }
    
}
void main()
{
    int ch,item;
    while(1)
    {
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter item : ");
            scanf("%d",&item);
            enqueue(item);
            break;
           
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
}
