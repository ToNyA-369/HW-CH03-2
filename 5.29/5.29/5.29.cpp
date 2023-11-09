#include <stdio.h>

int LCM(int x, int y);
int GCD(int m, int n);

int main()
{
	int m, n;
	printf("Input the two numbers : ");
	scanf("%d %d", &m, &n);
	printf("Their LCM : %d\n\n", LCM(m, n));
}

int LCM(int m, int n)
{
	return m * n / GCD(m, n);
}

int GCD(int m, int n) {
	if (n == 0) return m;
	else return GCD(n, m % n);
}