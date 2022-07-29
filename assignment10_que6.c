//7. Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
//test case:-combination=n!/(n-r)!*r!
#include<stdio.h>
int main()
{
	int n,r,m;
	printf("enter the no ");
	scanf("%d %d",&n,&r);
	m=comb(n,r);
	printf("%d",&m);
}
int comb(int n,int r)
{
	float fact=1,i=1,fact2,fact1,com;
	while(n>0)
	{
	fact=n*i;
	fact1=(n*i-r);
	fact2=fact1-(r*i);
	i--;
	}
	com=fact/fact1*fact2;
	return com;
	
}
