#include <stdio.h>

int main()
{
    int      i;
    double   f;
    float    f1;
    char*     s[30];
    
    printf("Please input a integer \n");
    scanf("%d",&i);
    printf("your input integer = %d\n",i);
    
    printf("Please input a float number \n");
    scanf("%lf",&f);
    printf("Your input float number = %lf\n",f);
    
    printf("Please input a string \n");
    scanf("%s",s);
    printf("Your input string = %s\n",s);

    return 0;
}
