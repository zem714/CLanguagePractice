#include <stdio.h>
int main()
{   
    int min;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    min = (a < b) ? (a<c) ? a : c : (b<c) ? b : c;
    printf ("%d",min);
    return 0;
}