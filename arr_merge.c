#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[20],b[20],m,n,i;
    printf("Enter the size of the first array : ");
    scanf("%d",&m);
    printf("Enter the elements of the first array :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array :");
    scanf("%d",&n);
    printf("Enter the elements of the second array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int j=0;
    for(i=m;i<m+n;i++)
    {
      
           a[i]=b[j];
           j++;
    }
    printf("The new array is :");
    for(int i=0;i<n+m;i++)
    {
        printf("%d \t",a[i]);
    }
}
