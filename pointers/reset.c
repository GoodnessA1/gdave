//This is to reset a value with a pointer

#include <stdio.h>

int main(void){
	int i;
	int *y;

	i = 402;
	y = &i;

	printf("%i\n", *y);

	*y = 98;
	printf("%d\n", i);
	return 0;
}
