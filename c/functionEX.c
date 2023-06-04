//This is a code to define a function
//that solves for the area of a triangle

#include <stdio.h>
#include <math.h>

float areaOfTriangle(float, float, float);
float areaOfTriangle(float a, float b, float c){
	float area, sp;

	sp = (a + b + c)/2;

	area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	return area;
}

int main(){

	float x, y, z, u;

	printf("First side of triangle: \t");
	scanf(" %f", &x);

	printf("\nSecond side: \t");
	scanf(" %f", &y);

	printf("\nThird side: \t");
        scanf(" %f", &z);

	u = areaOfTriangle(x, y, z);
	printf("Area = %f", u);
	printf("\n");
}
