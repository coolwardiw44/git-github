/* porogram for finding prime numbers*/

#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	int i, flag;
	scanf("%d",&num);
	for ( i=2; i<= sqrt(num); i++)
	{
		if (num%2==0)
		{
			flag=1;
			printf("number is not prime:\n");
		}
		else {
			printf("number is prime\n");
		}
	}

	return 0;
}
