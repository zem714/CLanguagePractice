#include <stdio.h>
int main()
{
    int a ,b;
    scanf("%d %d",&a,&b);
    int c = b+100-a;
    printf("%d",c);
    if ( c>0) {
        printf("\nObesity");
    }
}