#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *ptr=NULL;
void enqueue()
{
    ptr=(struct node*)malloc(sizeof(struct node));
    
    printf("Enter the item : ");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        front->link=rear->link=NULL;
    }
    else
    {
        rear->link=ptr;
        rear=ptr;
        rear->link=NULL;
    }
}
void dequeue()
{
    ptr=front;
    if(front==NULL)
    printf("Empty\n");
    else
    {
        printf("%d is removed from the queue : ",front->data);
        front=front->link;
        free(ptr);
    }
}
void display()
{
    if(front==NULL&&rear==NULL)
    printf("Empty\n");
    else
    {
        ptr=front;
        while(ptr!=NULL)
        {
            printf("%d-->",ptr->data);
            ptr=ptr->link;
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2: dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
}
