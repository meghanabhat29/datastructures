#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *rlink;
    struct node *llink;
};
struct node *head=NULL,*temp=NULL,*ptr=NULL;
void insert_end()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&temp->data);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(head==NULL)
    head=temp;
    else
    {
        ptr=head;
        while(ptr->rlink!=NULL)
        {
            ptr=ptr->rlink;
        }
        ptr->rlink=temp;
        temp->llink=ptr;
    }
}
void insert_beg()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&temp->data);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->rlink=head;
        head->llink=temp;
        head=temp;
    }
}
void location_based()
{
	int count=0,pos,i;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->rlink;
	}
	printf("Enter the position\n");
	scanf("%d",&pos);
	if(pos==1)
		insert_beg();
	else if(pos==count+1)
		insert_end();
	else if(pos>1 && pos<=count)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the item");
		scanf("%d",&temp->data);
		ptr=head;
		for(i=1;i<pos-1;i++)
		{
		ptr=ptr->rlink;
		}
		temp->rlink=ptr->rlink;
		temp->llink=ptr;
		ptr->rlink->llink=temp;
		ptr->rlink=temp;
	}
	else
		printf("Invalid position");
}
void delete_end()
{
    if(head==NULL)
    printf("The list is empty\n");
    else
    {
        ptr=head;
        while(ptr->rlink!=NULL)
        {
            ptr=ptr->rlink;
        }
        ptr->llink->rlink=NULL;
        free(ptr);
     }
}
void delete_beg()
{
    if(head==NULL)
    printf("The list is empty\n");
    else
    {
        ptr=head;
        head=head->rlink;
        head->llink=NULL;
        free(ptr);
    }
}
void del_location_based()
{
	int count=0,pos,i;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->rlink;
	}
	printf("Enter the location\n");
	scanf("%d",&pos);
	if(pos==1)
		delete_beg();
	else if(pos==count)
	{
	    delete_end();
	}
	else if(pos>1 && pos<count)
	{
	    if(head==NULL)
	    printf("the list is empty\n");
		ptr=head;
		for(i=1;i<pos;i++)
		{
			ptr=ptr->rlink;
		}
		ptr->llink->rlink=ptr->rlink;
		ptr->rlink->llink=ptr->llink;
	}
	else
		printf("Invalid position\n");
}	
void display()
{
    if(head==NULL)
    printf("The list is empty \n");
    else
    {
       ptr=head;
       while(ptr->rlink!=NULL)
       {
           printf("%d-->",ptr->data);
           ptr=ptr->rlink;
       }
       printf("%d",ptr->data);
    }
}
void count_nodes()
{
	int count=0;
	if(head==NULL)
		printf("The list is empty\n");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			count++;
			ptr=ptr->rlink;
		}
	
	}
	printf("The number of nodes= %d",count);
}
void search_node()
{
	int item,flag=0;
	printf("Enter the item to be searched for\n");
	scanf("%d",&item);
	if(head==NULL)
		printf("The list is empty\n");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			if(item==ptr->data)
			{
				printf("Element found \n");
				flag=1;
				break;
			}
			else
			{
				ptr=ptr->rlink;
			
			}
		}
		if(flag==0)
			printf("Element not found\n");
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n Enter 1:Insert_end \n 2:To insert in the beginning\n 3:Insert in a desired location\n 4:Display\n 5:To count the number of nodes\n 6:Delete at the beginning\n 7:Delete from the end\n 8:Delete from the desired location\n 9:Search_node\n 10:Exit\n");
		printf("Enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert_end();
			break;
			case 2:insert_beg();
			break;
			case 3:location_based();
			break;
			case 4:display();
			break;
			case 5:count_nodes();
			break;
			case 6:delete_beg();
			break;
			case 7:delete_end();
			break;
			case 8:del_location_based();
			break;
			case 9:search_node();
			break;
			case 10:exit(0);
			

		}
	}
}


