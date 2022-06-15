#include<stdio.h>

void printstar(char string[])
{
    int i = 0;
    while (string[i] != 0)
    {
        printf("%c",string[i]);
        i++;
    }
    
}
int main()
{
    char str[20];
    gets(str);       // using stdio library
    // printf("%s",str);
    puts(str);       //using stdio library
    
    
    
    // char str[] = {'a','n','s','h','\0'};
    // char str[] = {"ansh"};
    // printstar(str);
    return 0;
}