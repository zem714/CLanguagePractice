#include <stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    switch ( (int)a) {
        case 4 : printf("scholarship"); break;
        case 3 : printf("next semester"); break;
        case 2 : printf("seasonal semester"); break;
        default : printf("retake"); break;
    }
}