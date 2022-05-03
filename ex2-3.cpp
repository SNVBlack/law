#include <stdio.h>

int main()
{
    int     i;
    int     i1;
    printf("Please input number1 \n");
    scanf("%d",&i);
    printf("number1 = %d\n",i);
    printf("Please input number2 \n");
    scanf("%d",&i1);
    printf("number2 = %d\n",i1);
    printf("%d\n",i*i+i1*i1);

    return 0;
}
