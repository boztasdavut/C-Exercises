

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int x;
printf("Enter a Number: ");
scanf("%d", &x);
printf("%d prime divisors of numbers\n", x);
printf("---------------------\n");
for(int i=2; x>1; i++)
{
	while(x%i==0)
	{
		printf("%d   ", i);
		x=x/i;
	}
}



return 0;
}

