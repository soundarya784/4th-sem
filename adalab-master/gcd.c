#include<stdio.h>
int gcd(int m,int n);

void main()
{
	int greatest,m,n;
	printf("enter two positive integers;");
	scanf("%d%d",&m,&n);
	greatest=gcd(m,n);
	printf("gcd of %d and %d is:%d",m,n,greatest);
}
int gcd(int m,int n)
{
	if(n==0)
		return m;
	else
		 return gcd(n,m%n);
}
	
