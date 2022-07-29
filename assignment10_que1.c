//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float fun(int);
int main()
{
	printf("%f",fun(3));
}
float fun(int r)
{	
	float n;
	n=3.14*r*r;
	return n;
}
