

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int x,y;
int a=1;
printf("How many elements is the list? ");
scanf("%d", &x);
int adizi[x];
for(int i=1; i<=x; i++)
{
	printf("Enter the %d. element of the list: ", a++);
	scanf("%d", &adizi[i]);
}
a=1;
printf("\n\n\nHow many elements is the list? ");
scanf("%d", &y);
int bdizi[y];
for(int j=1; j<=y; j++)
{
	printf("Enter the %d. element of the list: ", a++);
	scanf("%d", &bdizi[j]);
}
printf("\n\n\n2 concatenated list: ");
for(int m=1; m<=x+y; m++)
{
	if(m>x)
	{
		printf("%d ", bdizi[m-x]);
	}
	else if(m<=x)
	{
		printf("%d ", adizi[m]);
	}
}
	
	
	
	
	
	


return 0;
}