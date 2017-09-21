#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    switch (num) {
        case 1 : printf("Number? dog"); break;
        case 2 : printf("Number? cat"); break;
        case 3 : printf("Number? chick"); break;
        default : printf("Number? I don't know"); break;
    }
    return 0;
}

//문제가 이상하다는 것을 알고있자.