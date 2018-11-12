
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],m=0,item,l,u,flag=0;
    printf("Enter : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    u=10;
   
    printf("Enter item : ");
    scanf("%d",&item);
    while(m<(10))
    
    {
        m=(l+u)/2;
        if(a[m]>item)
        {
            u=m-1;
        }
        else if(a[m]<item)
        {
            l=m+1;
        }
        else
        { flag=1;
        break;
    }
}
if(flag==1)
printf("Element found");
else
printf("Nope");
 
}
