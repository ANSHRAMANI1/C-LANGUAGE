#include<stdio.h>

int main()
{
    int i,age;
    for(i=0; i < 10;i++)
    {
        printf("%d\n",i);
        printf("enter your age : ");
        scanf("%d",&age);
        if(age>10)
        {
            break;
        }

        // if (age>10)
        // {
        //     continue;
        // }
        //      //so age is  >10 so hello is not print but loop is continue 
        // printf("hello");
    }
    return 0;
}
