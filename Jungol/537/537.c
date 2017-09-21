#include <stdio.h>
int main()
{
    int sum;
    int get;
    int a;
    scanf("%d",&get);
    sum = 0;
    a = 1;
    while ( a<=get) {
        sum = sum + a;
        a++;
    }
    printf("%d",sum);
    return 0;
}