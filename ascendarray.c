#include<stdio.h>
main()
{
      int no[25],i,j,t;
      for (i=0;i<25;i++)
      {
          printf("Enter no\n");
          scanf("%d",&no[i]);
      }
      for(i=0;i<25;i++)
      {
                      j=i;
                      while( no[j] >no[j+1])
                      {
                                          t=no[j];
                                          no[j]=no[j+1];
                                          no[j+1]=t;
                                          j--;
                      }
      }
      printf("Ascending no:\n");
      for(i=0;i<25;i++)
      {
                      printf("%d\n",no[i]);
      }
      system("pause");
}
