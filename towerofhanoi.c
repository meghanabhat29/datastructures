#include<stdio.h>
void TOH(int n,char source,char temp,char dest)
{
    if(n==1)
    printf("%c -> %c \n",source,dest);
    else
    {
        TOH(n-1,source,dest,temp);
        printf("%c -> %c \n",source,dest);
        TOH(n-1,temp,source,dest);
    }
}
void main()
{
    int n;
    printf("Enter the number of discs : ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}
