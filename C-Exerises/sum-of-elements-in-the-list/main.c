

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
void sumFunc(int dizi[], int x);
int x;
printf("How many elements does the list have? ");
scanf("%d", &x);
int dizi[x];
sumFunc(dizi,x);








return 0;	
}
void sumFunc(int dizi[], int x)
{
	int toplam=0;
	int m=1;
	for(int i=1; i<=x; i++)
	{
		printf("Enter the %d element of array \n", m++);
		scanf("%d", &dizi[i]);
		toplam=toplam+dizi[i];
	}
	printf("\nElements of array: ");
	for(int j=1; j<=x; j++)
	{
		printf("%d ", dizi[j]);
	}
	printf("\n\nSum of entered array elements: %d", toplam);
}



