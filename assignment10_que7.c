//7. Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int );
int main()
{
	int n,r;
	printf("enter the no ");
	scanf("%d %d",&n,&r);
	fact(n);
	comb(n,r);
	printf("%d",comb(n,r));
}
int fact(int n)
{
	int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	return fact;
}
int comb(int n,int r)
{
	return fact(n)/(fact(r)*fact(n-r));
}
