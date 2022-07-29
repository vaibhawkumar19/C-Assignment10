//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	odd(n);
}
void odd(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		printf("%d",i);
	}
	return;
}
