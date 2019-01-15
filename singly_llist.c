#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL,*temp=NULL,*ptr=NULL;
void insert_beg()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter item : ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
       temp->link=head;
       head=temp;
    }
}
void insert_end()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d-->",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}
void insert_loc()
{
  int count=0,pos;
  ptr=head;
  while(ptr!=NULL)
  {
      count++;
      ptr=ptr->link;
  }
  printf("\nEnter the desired position : ");
  scanf("%d",&pos);
  if(pos==1)
  {
      insert_beg();
  }
  else if(pos==count+1)
  {
      insert_end();
  }
  else if(pos>1&&pos<=count)
  {
      temp=(struct node*)malloc(sizeof(struct node));
      printf("Enter the item : ");
      scanf("%d",&temp->data);
      temp->link=NULL;
      ptr=head;
      for(int i=1;i<pos-1;i++)
      {
          ptr=ptr->link;
      }
      temp->link=ptr->link;
      ptr->link=temp;
      
  }
  else
  printf("Invalid position\n");
}
void delete_beg()
{
    if(head==NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        ptr=head;
        head=head->link;
        free(ptr);
    }
}
void delete_end()
{
    if(head==NULL)
    printf("The list is empty\n");
    else
    {
        ptr=head;
        while(ptr->link!=NULL)
        {
            temp=ptr;
            ptr=ptr->link;
        }
        temp->link=NULL;
        free(ptr);
        
    }
}
void delete_loc()
{
    int count=0,pos;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("Enter the location : ");
    scanf("%d",&pos);
    if(pos==1)
    {
        delete_beg();
    }
    else if(pos==count)
    {
        delete_end();
    }
    else if(pos>1&&pos<count)
    {
        ptr=head;
       for(int i=1;i<pos;i++)
        {
            temp=ptr;
            ptr=ptr->link;
        }
        temp->link=ptr->link;
    }
}
void search()
{
    int item,flag=0;
    ptr=head;
    printf("Enter the item to be searched for : ");
    scanf("%d",&item);
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            flag=1;
            break;
        }
        else
        {
            ptr=ptr->link;
        }
        
    }
    if(flag==1)
    {
        printf("Element found\n");
    }
    else
    printf("element not found\n");
}
void count()
{
   int count=0;
    ptr=head;
    while(ptr!=NULL)
    {
      count++; 
      ptr=ptr->link;
    }
    printf("The number of nodes = %d",count);
}
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d-->",ptr->data);
        ptr=ptr->link;
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\nEnter\n1:Insert at the beginning\n2:Insert at the end\n3:Insert based on location\n4:Delete at the beginning\n5:Delete at the end\n6:Delete based on loaction\n7:Display\n8:Count\n9:Search for a node\n10:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_beg();
            break;
            case 2:insert_end();
            break;
            case 3:insert_loc();
            break;
            case 4:delete_beg();
            break;
            case 5:delete_end();
            break;
            case 6:delete_loc();
            break;
            case 7:display();
            break;
            case 8:count();
            break;
            case 9:search();
            break;
            case 10:exit(0);
        }
    }
}
