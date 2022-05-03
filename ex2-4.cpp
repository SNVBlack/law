#include <stdio.h>

int main()
{
    const float PI = 3.1415926;
    int      r;
    int      d;
    
    printf("Please input r = \n");
    scanf("%d",&r);
    printf("r = %d\n",r);
    printf("周长 = %f\n",2*PI*r);
    
    printf("面积 = %f\n",PI*(r*r));
    

    return 0;
}
