/*
program 4
*/
#include<stdio.h>

int main()
{
	int inputCurrency=0;
	printf("Enter the Total Amount: ");
	scanf("%d",&inputCurrency);
	if(inputCurrency>=2000)
	{
		printf("No. of 2000RS. Denomination Notes: %d\n",(inputCurrency/2000));
		inputCurrency %=2000;
	}
	if(inputCurrency>=500)
	{
		printf("No. of 100RS. Denomination Notes: %d\n",(inputCurrency/500));
		inputCurrency %=500;
	}
	if(inputCurrency>=100)
	{
		printf("No. of 100RS. Denomination Notes: %d\n",(inputCurrency/100));
		inputCurrency %=100;
	}
	if(inputCurrency>=50)
	{
		printf("No. of 50RS. Denomination Notes: %d\n",(inputCurrency/50));
		inputCurrency %=50;
	}
	if(inputCurrency>=10)
	{
		printf("No. of 10RS. Denomination Notes: %d\n",(inputCurrency/10));
		inputCurrency %=10;
	}
	if(inputCurrency>=5)
	{
		printf("No. of 5RS. Denomination Notes: %d\n",(inputCurrency/5));
		inputCurrency %=5;
	}
	if(inputCurrency>=2)
	{
		printf("No. of 2RS. Denomination Notes: %d\n",(inputCurrency/2));
		inputCurrency %=2;
	}
	if(inputCurrency>=1)
	{
		printf("No. of 1RS. Denomination Notes: %d\n",(inputCurrency));
	}
	return(0);
}
