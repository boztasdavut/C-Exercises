

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
void test(int x);
int x;
printf("Enter a number: ");
scanf("%d", &x);
test(x);

   
return 0;
}
void test(int x)
{
	int total=0;
	for(int i=1; i<=x-1; i++)
	{
		if(x%i==0)
		{
		
			total=total+i;
		}
	}
	if(total==x)
	{
		printf("it is perfect number.");
	}
	else
	printf("it is not perfect number");
	
	
}


