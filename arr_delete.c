  #include <stdio.h>
  #include <conio.h>
  void main()
  {
      int a[20],del,i,n;
      printf("Enter the size of the array :");
      scanf("%d",&n);
      printf("Enter the elements");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("Enter the position from which the element should be deleted or the item to be deleted");
      scanf("%d",&del);
      for(i=0;i<n;i++)
      {
          if(a[i]==del)
          {
              a[i]=a[i+1];
          }
          else
          {
              if(del<pos)
              {
                  
              
              for(i=0;i<=del;i++)
              {
                 a[del]=a[i+1];
              }
          }
      }
     }
  }
