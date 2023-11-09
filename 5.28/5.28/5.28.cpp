#include <stdio.h>

char trans(char c);

int main()
{
	char c;
	printf("Input the charter : "); scanf("%c", &c);
	printf("There is the output : %c\n\n", trans(c));
}

char trans(char c)
{
	if (c > 64 && c < 91) return c | 0x20;
	else if (c > 96 && c < 123) return c & 0xdf;
	else return '0';
}
