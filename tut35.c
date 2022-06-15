#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = {"ansh"};
    char str2[] = {"ramani"};
    
    puts(strcat(str1,str2));  //-->for combine both string
    puts(strrev(str1));   //--->for print return
    printf ("the lenth of string 1 is %d",(strlen(str1)));  //---> for get string lenth
    printf("%d",strcmp(str1,str2)); // ---->for compare two string
    puts(strcpy(str1,str2));

    // char str1[20];
    // char str2[20];
    // gets(str1);
    // gets(str2);
    // puts(str1);
    // puts(str2);
    // printf("%s is a freind %s \t",str1,str2);
    // puts(strcat(str1,str2));
   

    return 0;
}
