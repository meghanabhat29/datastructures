   #include <stdio.h>
  #include <conio.h>
  void main()
  {
      int a[20],del,i,n;
      printf("Enter the size of the array :");
      scanf("%d",&n);
      printf("Enter the elements \n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("Enter the position or the item to be deleted");
      scanf("%d",&del);
      for(i=0;i<n;i++)
      {
          if(a[i]==del)
          {
              a[i]=a[i+1];
          }
          else
          {
              if(del<n)
                {
                  for(i=del;i<=n;i++)
                  {
                     a[i]=a[i+1];
                  }
                }
            }
     }
     n--;
     printf("The new array is :");
     for(i=0;i<n;i++)
     {
         printf("%d \t",a[i]);
     }
  }
