//Reversing a string

#include <stdio.h>

void rev_string(char *s){
	int i;

	for (i=10;i>=0;i--){
		printf("%c", s[i]);
	}
}

int main(void){
	char str[10] = "my school";

	printf("%s\n", str);

	rev_string(str);
	printf("\n");

	return 0;
}
