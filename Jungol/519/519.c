#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = a + 100;
	int d = b % 10;
	printf("%d %d", c, d);
	return 0;
}