#include<stdio.h>
#define pi 3.14       //----> declar as constant 
int main()
{
    int a =2;
    const float b = 2.34556;
    //b = 3.22; //can't do this since b is constant
    //pi=12.13; //can't do this since pi is constant
    printf("pi value is  %f",pi);
    //printf("the value of a is %d and the value of b is %0.3f",a,b);

    return 0;
}
