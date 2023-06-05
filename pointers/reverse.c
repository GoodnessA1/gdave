//This is to reverse a string

#include <stdio.h>

void print_rev(char *s){
	 int i;
	 for (i=64;i>=0;i--){
		 printf("%c", s[i]);
	 }
}

int main(void){
	char str[] =  "I do not fear computers. I fear the lack of them - Isaac  Asimov";

	print_rev(str);
	printf("\n");
	return 0;
}
