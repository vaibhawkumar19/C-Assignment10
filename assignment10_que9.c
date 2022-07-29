//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int isnumber(int ,int);
int main()
{
	int num,dig;
	printf("enter the no ");
	scanf("%d",&num);
	printf("enter the digit contains a digit ");
	scanf("%d",&dig);
	isnumber(num,dig);
	if(isnumber(num,dig))
		printf("the digit is present in the numebr ");
	else
		printf("the digit is not presented in the number ");
	
}
int isnumber(int num,int dig)
{
	while(num)
	{
		if(num%10 == dig)
		{
			return 1;
		}
		num/=10;
	}
	return 0;
}
