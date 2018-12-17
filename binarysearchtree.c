#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
struct node *root=NULL,*temp=NULL,*curr=NULL,*parent=NULL;
void create(struct node *tree)
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&temp->data);
    temp->lchild=NULL;
    temp->rchild=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        curr=root;
        while(curr)
        {
            parent=curr;
            if(curr->data==temp->data)
            {
                printf("The node exists\n");
                break;
            }
            else if(curr->data>temp->data)
            {
                curr=curr->lchild;
            }
            else
            {
                curr=curr->rchild;
            }
        }
        if(parent->data<temp->data)
        {
           parent->rchild=temp;
        }
        else
        {
            parent->lchild=temp;
        }
    }
}
void inorder(struct node *tree)
{
    if(tree!=NULL)
    {
        inorder(tree->lchild);
        printf("%d\t",tree->data);
        inorder(tree->rchild);
    }
}
void postorder(struct node *tree)
{
    if(tree!=NULL)
    {
    
    
        postorder(tree->lchild);
        postorder(tree->rchild);
        printf("%d\t",tree->data);
    }
}
void preorder(struct node *tree)
{
    if(tree!=NULL)
    {
        printf("%d\t",tree->data);
        preorder(tree->lchild);
        preorder(tree->rchild);
    }
}
void main()
{
    root=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the root node : ");
    scanf("%d",&root->data);
    int ch;
    while(1)
    {
        printf("\nEnter\n1:To create a node\n2:Display\nAny other number:Exit\n");
        printf("\nEnter choice : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            create(root);
        }
        else if(ch==2)
        {
            printf("Inorder traversal :\n");
            inorder(root);
            printf("\nPostorder traversal :\n");
            postorder(root);
            printf("\nPreorder traversal\n");
            preorder(root);
        }
        else
        {
            exit(0);
        }
    }
}
	
