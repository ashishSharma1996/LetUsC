/*
Program 2
*/
#include<stdio.h>

int main()
{
	int inputNo=0,reverseNo=0,i=0;
	printf("Enter the No.: ");
	scanf("%d",&inputNo);
	while(inputNo!=0)
	{
		reverseNo *=10;
		reverseNo +=(inputNo%10);
		inputNo /=10; 
	}
	printf("Reversed No. is: %d \n",reverseNo);
	return(0);
}

