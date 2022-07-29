//8. Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>
int perm(int,int);
int main()
{
	int n,r;
	printf("enter the no ");
	scanf("%d %d",&n,&r);
	fact(n);
	comb(n,r);
	perm(n,r);
	printf("%d",perm(n,r));
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
int perm(int n,int r)
{
	return fact(n)/fact(n-r);
}
