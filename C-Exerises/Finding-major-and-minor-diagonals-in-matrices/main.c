

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int x;
printf("How many elements does the matrix have? ");
scanf("%d", &x);
int list[x][x];
for(int i=0; i<x; i++)
{
	for(int j=0; j<x; j++)
	{
		if(i==j)
		{
			printf("1 ");
		}
		else if(i+j==4)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	printf("\n");
}



return 0;
}