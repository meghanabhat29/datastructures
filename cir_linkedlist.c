

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *last=NULL,*temp,*ptr;
void insert_beg()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the item\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(last==NULL)
	{
		last=temp;
		temp->link=last;
	}
	else
	{
		temp->link=last->link;
		last->link=temp;
	}
}
void insert_end()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the item\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(last==NULL)
	{
		last=temp;
		temp->link=last;
	}
	else
	{
		temp->link=last->link;
		last->link=temp;
		last=temp;
	}
}
void location_based()
{
	int count=0,pos,i;
	ptr=last->link;
	while(ptr!=last)
	{
		count++;
		ptr=ptr->link;
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
		temp->link=NULL;
		ptr=last->link;
		for(i=1;i<pos-1;i++)
		{
		ptr=ptr->link;
		}
		temp->link=ptr->link;
		ptr->link=temp;
	}
	else
		printf("Invalid position");
}
void count_nodes()
{
	int count=0;
	if(last==NULL)
		printf("The list is empty\n");
	else
	{
		ptr=last->link;
		while(ptr!=last)
		{
			count++;
			ptr=ptr->link;
		}
		count=count+1;
	}
	printf("The number of nodes= %d",count);
}
void delete_end()
{
	if(last==NULL)
		printf("The list is empty");
	else if(last->link==last)
	{
		ptr=last->link;
		last=NULL;
		free(ptr);
	}
	else
	{
		ptr=last->link;
		while(ptr!=last)
		{
			temp=ptr;
			ptr=ptr->link;
		}
		temp->link=last->link;
		last=temp;
		free(ptr);
	}
}
void delete_beg()
	{
	if(last==NULL)
		printf("The circular list is empty\n");
	else if(last->link==last)
	{
		ptr=last->link;
		last=NULL;
		free(ptr);
	}
	else
	{
		ptr=last->link;
		last->link=ptr->link;
		free(ptr);
	}
}
void del_location_based()
{
	int count=0,pos,i;
	ptr=last->link;
	while(ptr!=last)
	{
		count++;
		ptr=ptr->link;
	}
	printf("Enter the location\n");
	scanf("%d",&pos);
	if(pos==1)
		delete_beg();
	else if(pos>1 && pos<=count)
	{
		ptr=last->link;
		for(i=1;i<pos;i++)
		{
			temp=ptr;
			ptr=ptr->link;
		}
		temp->link=ptr->link;
	}
	else
		printf("Invalid position\n");
}	
void display()
{
	if(last==NULL)
		printf("the list is empty\n");
	else
	{
		ptr=last->link;
		while(ptr!=last)
		{
			printf("%d-->",ptr->data);
			ptr=ptr->link;
		}
		printf("%d",ptr->data);
	}
}
void search_node()
{
	int item,flag=0;
	printf("Enter the item to be searched for\n");
	scanf("%d",&item);
	if(last->link==NULL)
		printf("The list is empty\n");
	else
	{
		ptr=last->link;
		while(ptr!=last)
		{
			if(item==ptr->data)
			{
				printf("Element found \n");
				flag=1;
				break;
			}
			else
			{
				ptr=ptr->link;
			
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
		printf("\n Enter 1:Insert_end \n 2:To insert in the beginning\n 3:Count nodes\n 4:Display\n 5:Insert in a desired location\n 6:Delete at the beginning\n 7:Delete from the end\n 8:Delete from the desired location\n 9:Search_node\n 10:Exit\n");
		printf("Enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert_end();
			break;
			case 2:
			insert_beg();
			break;
			case 3:count_nodes();
			break;
			case 4:display();
			break;
		
			case 5:location_based();
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
