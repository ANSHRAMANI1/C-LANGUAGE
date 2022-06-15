#include<stdio.h>
  //call by reference
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}
int main()
{
    int a = 20, b = 10;
    printf("%d and %d\n",a,b);
    swap(&a,&b);
    printf("%d and %d ",a,b);
    return 0;
}