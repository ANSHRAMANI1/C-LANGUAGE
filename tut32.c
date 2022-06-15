#include <stdio.h>

// int func(int array[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("the value at %d is %d\n", i, array[i]);
//     }
//     array[0] = 100;
//     return 0;
// }

int func2(int* ptr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr+2) = 34;
    return 0;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    // printf("the value at 0 is %d\n",arr[0]);
    // func(arr);
    // printf("the value at 0 is %d\n",arr[0]);

    func2(arr);
    func2(arr);
    return 0;
}
