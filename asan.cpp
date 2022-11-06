#include<stdio.h>

main()
{
      int i,j;
      for (i=1;i<=25;i++)
         { 
               for (j=i;j<=i;j++)
               {
                   j=j+i;
               }
         }                   
          printf("%d%d",i,j);
          system("pause");
}
