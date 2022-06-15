#include<stdio.h>

int sum(int a,int b)//------>with argument and with return value
{
    return a+b;
}
void pointstar( int n) //------>with argument and without return value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int takenumber()  //------>without argument and with return value
{
    int i;
    printf("enter the number ");
    scanf("%d",&i);
    return i;
}
int main(  )
{
    int a,b,c,d;
    a=2;
    b=34;

    c = sum(a,b);
    d = takenumber();
    printf("entered number is : %d",d);
    //pointstar(10);
    //printf("the sum is : %d",c); //------>with argument and with return value
    return 0;
}
