#include<stdio.h>

int main()
{
    int n;
    printf("enter the number for get star pattern : ");
    scanf("%d",&n);
    
    // for(int i = 0; i< n; i++)
    // {
    //   for (int j = 0; j <= i; j++)
    //   {
    //       printf("* ");
    //   }
    //   printf("\n");
    // }

    for(int i = 0; i<n; i++)
    {
      for (int j = 0; j <=n-i-1; j++)
      {
          printf("* ");
      }
      printf("\n");
    }

    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; i <=n-i; j++)
    //    {
    //        (" ");
    //    }
    //    for (int j = 0; j <=i; j++)
    //    {
    //       printf("* ");
    //    }
    //    printf("\n");
       
    // }
    
    return 0;
}