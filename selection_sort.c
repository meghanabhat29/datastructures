#include<stdio.h>
#include<stdlib.h>
//Selection sort
void main()
{
    int n,i,j,temp,min;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("The sorted elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    
}
