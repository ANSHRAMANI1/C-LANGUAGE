#include<stdio.h>

int main()
{
    int a ;
    printf("enter the age : ");
    scanf("%d",&a);
    
    if (a>18)
    {
        printf("you are eligible for voting");
    }
    else if(a>10){
            printf("you ar beetween 10 and 18 you are eligible for kids vote");
    }
    else{
        printf("you are not eligible for voting");
    }
    
    return 0;
}
