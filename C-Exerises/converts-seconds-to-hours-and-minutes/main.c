

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
void calculate(int x);
int second, minutes,hours, k;
printf("enter how many seconds ");
scanf("%d", &second);
calculatema(second);



return 0;	
}
void calculate(int x)
{
	int minutes,hours, k;
	k=x;
	hours=x/3600;
	x=x%3600;
	minutes=x/60;
	x=x%60;
	printf("%d second = %d hours %d minutes ve %d second esittir.",k,hours, minutes,x);
	
	
	
	
	
}
	


