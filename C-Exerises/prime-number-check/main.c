

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int x;
int m=0;
printf("Enter a number ");
scanf("%d", &x);
int y=sqrt(x);
if(x!=1 && x!=2)
{
	for(int i=2; i<=y; i++)
	{
		if(x%i==0)
		{
			printf("it is not prime number.");
			m++;
			break;
		}
		
	}
	if(m==0)
	{
		printf("it is prime number.");
	}
	
	
}

return 0;
}

