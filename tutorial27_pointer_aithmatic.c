#include<stdio.h>

int main()
{
    // int a = 20;
    // int *ptr = &a;

    // printf("%d\n",ptr);
    
    // printf("%d\n",ptr+1); //int hone ki vajah se +4byte kar dega
    
    int arr[]={1,2,3,4,5,6,7};
    printf("%d\n",arr[5]);
    printf("the adress of first array is %d\n",&arr[0]);
    printf("the adress of first array is %d\n",arr);
    printf("the adress of second array is %d\n",&arr[1]);
    printf("the adress of second array is %d\n",arr + 1 );
    printf("the adress of third array is %d\n",&arr[2]);
    printf("the adress of third array is %d\n",arr + 2 );


    printf("the value of array is %d\n",*(&arr[1]));
    printf("the valu of array is %d\n",*(arr + 1) );
    return 0;
}