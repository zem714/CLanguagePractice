#include <stdio.h>
int main()
{
    int a;
    do{
        
        printf("number? ");
        scanf("%d",&a);
        if (a > 0) {
            printf("positive integer\n");
        }
        else if(a<0) {
            printf("negative number\n");
        }

    } while(a);
    
    return 0;

}