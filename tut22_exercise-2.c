#include <stdio.h>

int main()
{
    int num;
    float first, second;
    float kmtomiles = 0.62137119;
    float inchestofoot = 0.08333333;
    float cmstoinches = 0.39370079;
    float poundtokg = 0.45359237;
    float inchestometer = 0.0254;
    //char quit ; 
   
    while(1)
    {
    printf("1.converet km to miles\n");
    printf("2.converet inches to foot\n");
    printf("3.converet cms to inches\n");
    printf("4.converet pound to kg \n");
    printf("5.converet inches to meter\n\n");
    printf("6.enter 0 for quit from program\n\n");
    
    printf("choose any one for conversion\n\n");

    
    printf("enter the value for conversion : ");
    scanf("%d",&num);
    switch (num)
    {
    
    

    case 1:
        printf("km to miles \n");
        printf("enter the first value for conversion : ");
        scanf("%f", &first);
        second = first * kmtomiles;
        printf("%f km ===> %0.4f miles\n\n", first, second);
        break;

    case 2:
        printf("inches to foot \n");
        printf("enter the first value for conversion : ");
        scanf("%f", &first);
        second = first * inchestofoot;
        printf("%f inches ===> %0.4f foot\n\n", first,second);
        break;

    case 3:
        printf("cms to inches \n");
        printf("enter the first value for conversion : ");
        scanf("%f", &first);
        second = first * cmstoinches;
        printf("%f cms ===> %0.4f inches\n\n", first,second);
        break;

    case 4:
        printf("pound to kg \n");
        printf("enter the first value for conversion : ");
        scanf("%f", &first);
        second = first * poundtokg;
        printf("%f pound ===> %0.4f kg\n\n",first, second);
        break;

    case 5:
        printf("inches to meter \n");
        printf("enter the first value for conversion : ");
        scanf("%f", &first);
        second = first * inchestometer;
        printf("%f inches ===> %f meter\n\n", first,second);
        break;

    case 6:
        printf("you are quit now");
        goto end;
        break;
    default:
        break;
    }
    }
    end:
    return 0;
}
