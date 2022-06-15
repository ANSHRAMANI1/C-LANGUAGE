// #include<stdio.h>

// int main()
// {
//     int a[5]={10,20,30,40,50};
//     printf("value of 3 position is %d",a[2]);
//     return 0;
// }


//value get from user
// #include<stdio.h>

// int main()
// {
//     int marks[5];
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("the marks of %d position is \n",i);
//         scanf("%d",&marks[i]);
        
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("the marks of %d position is %d\n",i,marks[i]);
//     }
    
   
//     return 0;
// }


//two di array
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][5]={{10,20,30,40,50},{30,5,12,54,65}};

    for (int i = 0; i < 2; i++)
    {
       
        for (int j = 0; j < 5; j++)
        {
           printf("the value of %d,%d position is %d\n",i,j,a[i][j]);
        }
        
    }
    
    return 0;
}

































