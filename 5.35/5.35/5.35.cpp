#include <stdio.h>

long long int fibonacci(int n);

int main()
{
	unsigned int n;
	printf("Want how many fibonacci : "); scanf("%u", &n);
	for (int i = 0; i < n; i++) printf("%d ",fibonacci(i));
	printf("\n\n");
}

long long int fibonacci(int n)
{
	int x = 0, y = 1, c = 0;
	if (n < 2) return n;
	else {
		for (int i = 0; i < n - 1; i++) {
			c = x + y;
			x = y;
			y = c;
		}
		return c;
	}
}