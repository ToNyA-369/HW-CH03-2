#include <stdio.h>

int power(int b, int e);

int main()
{
	int b, e;
	printf("Input the (Base Exponent) : "); scanf("%d %d", &b, &e);
	printf("%d ^ %d = %d\n\n", b, e, power(b, e));
}

int power(int b, int e)
{
	int t = b;
	if (e == 0) return 1;
	else {
		while (--e > 0) t *= b;
		return t;
	}
}