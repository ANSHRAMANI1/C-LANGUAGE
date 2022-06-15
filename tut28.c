#include<stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
    
}
int main()
{
    int number;
    printf("enter the number for fibonacci series: \n");
    scanf("%d",&number);
    printf("this is fibonaci series of %d is %d\n",number,fibonacci(number));
    return 0;
}