#include <stdio.h>
int main()
{
    int a;
    do {
        scanf("%d",&a);
        if(a%3==0){
            printf("%d\n",a/3);
        }
    } while(a!=-1);
}