
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
			case 1:insert_end();
			break;
			case 2:delete_end;
			break;
			case 3:display();
			break;
			case 4:exit(0);

		}
	}
}
