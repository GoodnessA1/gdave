//This is for printing text in (bin, hex, oct) format

#include <stdio.h>
int main(void)
{
	int a = 15;
	int b = 0xa;
	int c = 022;

	printf("This is decimal format: %d\n", a);
	printf("Hex format: %x\n", a);
	printf("Octal format: %o\n", a);

	printf("This is decimal format: %d\n", b);
        printf("Hex format: %x\n", b);
        printf("Octal format: %o\n", b);

	printf("This is decimal format: %d\n", c);
        printf("Hex format: %x\n", c);
        printf("Octal format: %o\n", c);

	return 0;
}
