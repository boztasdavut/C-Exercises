

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
void bolme(int x, int y);
int x,y;
printf("Enter the number you want to divide: ");
scanf("%d", &x);
printf("Enter the divisor:
 ");
scanf("%d", &y);
bolme(x,y);
return 0;	
}
void bolme(int x,int y)
{
	printf("remainder: %d\n", x%y);
	printf("division: %d", x/y);
	
}



