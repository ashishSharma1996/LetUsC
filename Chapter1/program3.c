/*
Program 3
*/
#include<stdio.h>

int main()
{
	int inputNo=0,sum=0,i,count=0,inputCopy=0,remainder=0;
	printf("Enter the No.: ");
	scanf("%d",&inputNo);
	inputCopy = inputNo;
	
	//find the No. Of digits
	while(inputCopy!=0)
	{
		inputCopy /=10;
		count++;
	}
	
	for(i=count;i>=1;i--)
	{
		remainder=inputNo%10;	
		if(i==count||i==1)
		sum+=remainder;
		inputNo /=10;
	}
	printf("Sum of 1st and last Digit is: %d",sum);
	return(0);
}


