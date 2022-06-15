#include<stdio.h>

int main()
{
    
    int a;
    printf("enter the value of a is : ");
    scanf("%d",&a);

    switch(a)
    {
        case 2:
        printf("value is 2");
        break;

        case 3:
        printf("value is 3");
        break;

        default:
        printf("value is not match");

    }
    
    return 0;
}
