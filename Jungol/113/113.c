#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a = a + 5;
    b = b * 2;
    printf("width = %d\nlength = %d\narea = %d",a,b,a*b);
}