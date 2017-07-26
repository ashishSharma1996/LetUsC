
/*
Program 5
*/
#include<stdio.h>

int main()
{
	int inputNo=0,newNo=0,reverseNo=0,i=0;
	printf("Enter No.: ");
	scanf("%d",&inputNo);
	
	while(inputNo!=0)
	{
		reverseNo *=10;
		reverseNo +=(inputNo%10)+1;
		inputNo /=10; 
	}
	
	while(reverseNo!=0)
	{
		newNo*=10;
		newNo+=reverseNo%10;
		reverseNo /=10;
	}
	printf("New No.: %d\n",newNo);
	return(0);
}

