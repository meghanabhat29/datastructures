#include <stdio.h>
#include <conio.h>
  void main()
  {
      int a[20],i,item,pos,n;
      printf("Enter the number of elements in the array : ");
      scanf("%d",&n);
      printf("Enter the elements \n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("Enter the item to be inserted : ");
      scanf("%d",&item);
      printf("Which position should it be inserted at? :");
      scanf("%d",&pos);
      for(i=n-1;i>=pos;i--)
      {
          a[i+1]=a[i];
      }
      a[pos]=item;
      n++;
      printf("The new array is :");
      for(i=0;i<n;i++)
      {
         printf("%d \t",a[i]); 
      }
  }
 
