#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch == 'A') {
        printf("Excellent");
    }
    else if(ch=='B') {
        printf("Good");
    }
    else if(ch=='C') {
        printf("Usually");
    }
    else if(ch=='D') {
        printf("Effort");
    }
    else if(ch=='F') {
        printf("Failure");
    }
    else {
        printf("error");
    }
    return 0;
}