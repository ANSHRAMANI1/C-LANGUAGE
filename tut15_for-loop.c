// #include<stdio.h>

// int main()
// {
//     // int num;
//     // printf("enter value for gone : ");
//     // scanf("%d",num);
//     for (int i = 0; i < 20; i++)   //i++ and i= i+1 both are same
//     {
//         printf("%d\n",i);
//     }
    
//     return 0;
// }

//or two expression are intialization in for loop

 #include<stdio.h>

int main()
{
     int i,j;
    for (i = 0,j = 0; i < 20;  i++,j++)   //i++ and i= i+1 both are same
    {
        printf("%d %d\n",i,j);
    }
    
    
    
    return 0;
}
