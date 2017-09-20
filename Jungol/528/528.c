#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",a);
    if( a > 0 ) {
        return 0;
    }
    else {
        printf("\nminus");
        return 0;
    }
}