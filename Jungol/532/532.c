#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(a>=4.0&&b>=4.0) {
        printf("A");
    }
    else if(a>=3.0&&b>=3.0) {
        printf("B");
    }
    else {
        printf("C");
    }
    return 0;
}