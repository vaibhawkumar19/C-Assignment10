//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void printn(int);
int main()
{
	printn(10);
}
void printn(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	return;
}
