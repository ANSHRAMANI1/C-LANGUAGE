#include<stdio.h>

int main()
{
    int age,marks;
    printf("enter your age : ");
    scanf("%d",&age);

     printf("enter your marks : ");
    scanf("%d",&marks);

    switch (age)
    {
    case 10:
        printf("your age is 10 \n");
        switch (marks)
        {
        case 90:
            printf("your marks is 90");
            break;
        
        default:
            printf("your marks is not 90");
            break;
        }
        break;
        
    case 15:
        printf("your age is 15");
        break;
    
    case 20:
        printf("your age is 20");
        break;
    
    default:
    
        printf("your age is  not 10,15,20");
        break;
    }
    return 0;
}
