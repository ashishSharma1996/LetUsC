/*
program 1: Program To Print Reverse Of A Number
*/
#include<stdio.h>

int main()
{
	int inputNo=0,sum=0,i=0;
	printf("Enter a 5-Digit No.: ");
	scanf("%d",&inputNo);
	while(inputNo!=0)
	{
		sum +=(inputNo%10);
		inputNo /=10;
	}
	printf("The sum Of the digits is: %d\n",sum);
	return(0);
}

