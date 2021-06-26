#include<stdio.h>
int isprime(int , int);
int main()
{
	int num,prime;
	printf("enter a number to check if prime or not=");
	scanf("%d",&num);
	prime = isprime(num,num/2);
	if(prime==1)
	{
		printf("%d is a prime number",num);
	}
	else
	{
		printf("%d is a composite number",num);
	}
	return 0;
	
}
int isprime(int num,int a)
{
	if(a==1)
	{
		return 1;
    }
	else
	{
		if(num%a==0)
		{
			return 0;
		}
		else
		{
			isprime(num, a-1);
		}
	}	
}
