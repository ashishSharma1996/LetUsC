/*
Program 6
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float side1=0,side2=0,side3=0,perimeter=0,area=0;
	printf("Enter length of Side1: ");
	scanf("%f",&side1);
	printf("Enter length of Side2: ");
	scanf("%f",&side2);
	printf("Enter length of Side3: ");
	scanf("%f",&side3);
	perimeter = (side1+side2+side3)/2;
	
	area=sqrt(perimeter*(perimeter-side1)*(perimeter-side2)*(perimeter-side3));
	
	printf("Area of triangle is: %.3f\n",area);
}

