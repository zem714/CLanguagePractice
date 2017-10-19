#include <stdio.h>
int main()
{
    int sum=0;
    int a;
    int times=0;
    do {
        scanf("%d",&a);
        sum = sum + a;
        times++;
    } while (a < 100 );
    printf("%d\n",sum);
    printf("%.1lf",(double)sum/times);
    return 0;
}