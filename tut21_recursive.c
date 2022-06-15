#include<stdio.h>

int factorial(int number)
{
        
        if((number == 1) ||(number == 0))
        {
            return 1;
        }
        else{
            return (number * factorial(number-1));
        }
}


int main()
{
    int num;
    printf("enter the value for factorial series : \n");
    scanf("%d",&num);
    printf("factorial series %d of %d ",num,factorial(num));
    return 0;
}


// #include<stdio.h>

// int factorial(int number)
// {
//     if (number == 1 || number == 0)
//     {
//         return 1;
//     }
//     else{
//         return (number * factorial(number - 1));
//     }
// }
// int main()
// {
//     int num;
//     printf("enter value for get factorial series : ");
//     scanf("%d",&num);
//     printf("factorial series of %d is %d",num,factorial(num));
//     return 0;
// }
