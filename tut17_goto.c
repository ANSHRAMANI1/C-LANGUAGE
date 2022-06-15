#include<stdio.h>

int main()
{
    // label:
    //     printf("we are inside in label");
    //    goto end;     
    //   printf("hello world");
      
    // goto label;
    //         // goto se ae label pe move karta he
    // end:
    //   printf("we are out in loop");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter the number,enter 0 to exit : \n");
            scanf("%d",&num);
            if (num == 0)
            {
                goto end;
            }
          
        }
         
    }
   end:  
    return 0;
}
