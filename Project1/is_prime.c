#include <stdio.h>
#include <math.h>

int is_prime(int n) 
{
	int j = 0;
	for (j=2; j<=sqrt(n); j++)
	{
		if (n%j ==  0) 
		{
			break;
		}
	}
	if (j>sqrt(n)) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int i = 0;
	for(i = 100; i<= 200; i++) 
	{
		//is_prime()函数，若是素数返回1，否则返回0
		if (is_prime(i) == 1) 
		{
			printf("%d ", i);
		}
	}
	return 0;
}