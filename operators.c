#include<stdio.h>

int main()
{
    int a,b;

    printf("enter the value of a is : \n");
    scanf("%d", &a);

    printf("enter the value of b is : \n");
    scanf("%d", &b);

    //arithmatic
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b); 
    printf("a/b = %d\n",a/b);

    //logical
    printf("a && b = %d\n", a&&b);
    printf("a || b = %d\n", a||b);
    printf("!b = %d\n", !b);

    //comparison
    printf("a < b = %d\n",a<b);
    printf("a > b = %d\n",a>b);
    printf("a <= b = %d\n",a<=b);
    printf("a >= b = %d\n",a>=b);
    printf("a == b = %d\n",a==b);
    return 0;
}
