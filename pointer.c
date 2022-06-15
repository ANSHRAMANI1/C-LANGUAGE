#include<stdio.h>

int main()
{
    int a = 20250;
    int *ptr = &a;
  
    printf("%d\n",&a);
    printf("%x\n",ptr);    //%x for hexadecimal number
    printf("%p\n",*ptr);    //%p for pointer value
    return 0;
    
}
