#include <stdio.h>
#include <math.h>

#define pi 3.142
int main(void)
{
	const int radius = 6;
	float area;

	area = pi * radius * radius;
	printf("Area: %f\n", area);

	char z[40] = "Goodness";
	printf("Name: %s\n", z);

	int a,b;
	float c;

	a = 10;
	b = 3;
	c = a/b*a;
	printf("c: %f\n", c);

	char name;
	printf("Enter a name: \t");
	scanf(" %c\n", &name);
	printf("Hello %s\n", &name);

	return 0;
}
