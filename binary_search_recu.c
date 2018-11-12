#include<stdio.h>
#include<stdlib.h>
 void binary_search(int a[],int l,int u,int item)
 {
     int m;
     if(l>u)
     printf("Not found");
     else
    {
     m=(l+u)/2;
     if(a[m]==item)
     printf("Found");
     else if(a[m]>item)
     {
         binary_search(a,l,m-1,item);
     }
     else
     {
         binary_search(a,m+1,u,item);
     }
    }
 }
  void main()
  {
      int size,item;
      printf("Enter the size : ");
      scanf("%d",&size);
      int a[size];
      printf("Enter the elements : ");
      for(int i=0;i<size;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("Enter the item to be searched for : ");
      scanf("%d",&item);
      binary_search(a,0,size,item);
  }
