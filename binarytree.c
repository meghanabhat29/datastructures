#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
struct node *root=NULL;
int item;
int is_lchild(struct node *tree)
{
    int ch;
    printf("Do you want to create a left child of %d?\nEnter\n1:Yes\n2:No : ",tree->data);
    scanf("%d",&ch);
    if(ch==1)
        return 1;
    else
        return 0;
}
int is_rchild(struct node *tree)
{
    int ch;
    printf("Do you want to create a right child of %d?\nEnter\n1:Yes\n2:No : ",tree->data);
    scanf("%d",&ch);
    if(ch==1)
        return 1;
    else
        return 0;
}
void create(struct node *tree)
{
    struct node *temp;
    if(is_child(tree))
    {
        tree->lchild=(struct node *)malloc(sizeof(struct node));
        temp=tree->lchild;
        printf("Enter the data : ");
        scanf("%d",&temp->data);
        create(temp);
    }
    else
    {
        tree->lchild=NULL;
    }
    if(is_rchild(tree))
    {
        tree->rchild=(struct node *)malloc(sizeof(struct node));
        temp=tree->rchild;
        printf("Enter the data : ");
        scanf("%d",&temp->data);
        create(temp);
    }
    else
    {
        tree->rchild=NULL;
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
    printf("Create the root node\n");
    root=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&root->data);
    create(root);
    printf("The inorder traversal is \n");
    inorder(root);
    printf("The postorder traversal is\n");
    postorder(root);
    printf("The preorder traversal is\n");
    preorder(root);
}
