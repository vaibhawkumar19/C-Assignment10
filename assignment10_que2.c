//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple(int ,int ,int );
int main()
{	
	int p,r,t;
	float n;   
	printf("enter p,r,t in si ");
	scanf("%d %d %d",&p,&r,&t);
	n=simple(p,r,t);
	printf("%f",n);
}
float simple(int p,int r,int t)
{
	float si;
	si=(p*r*t)/100;
	return si;
}
