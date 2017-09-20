#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int yl = 20 - a;
    if (a >= 20) {
        printf("adult");
    }
    else {
        printf("%d years later",yl);
    }
    return 0;
}