#include<stdio.h>

int main()
{
    int a;
   
    printf("enter the number for get the multipication table : \n");
    scanf("%d",&a);

    printf("the tabel of : %d \n",a);
    
    // printf("%d * 1: %d\n",a,a*1);
    // printf("%d * 2: %d\n",a,a*2);
    // printf("%d * 3: %d\n",a,a*3);
    // printf("%d * 4: %d\n",a,a*4);
    // printf("%d * 5: %d\n",a,a*5);
    // printf("%d * 6: %d\n",a,a*6);
    // printf("%d * 7: %d\n",a,a*7);
    // printf("%d * 8: %d\n",a,a*8);
    // printf("%d * 9: %d\n",a,a*9);
    // printf("%d * 10: %d\n",a,a*10);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
   
    
    return 0;
}
