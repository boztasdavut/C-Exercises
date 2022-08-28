

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
int x, m=1,y;
void silme(int dizi[], int desiredElement, int numberofElements);
printf("------------**************--------\n");
printf("Welcome\n");
printf("Enter the number of elements of the list ");
scanf("%d", &x);
int dizi[x];
srand(time(0));
for(int i=1; i<=x; i++)
{
	dizi[i]=rand()%100;
	printf("Dizinin %d. elemani: %d\n", m++, dizi[i]);
}
printf("Which element of the list do you want deleted?\n");
scanf("%d", &y);
silme(dizi,y,x);
	
	

	
return 0;	
}
void silme(int dizi[], int desiredElement, int numberofElements)
{
	for(int i=desiredElement; i<=numberofElements; i++)
	{
		if(dizi[i]=='\0')
		{
			break;
		}
		dizi[i]=dizi[i+1];
		
	}
	printf("new version of list: ");
	for(int j=1; j<=numberofElements-1; j++)
	{
		printf("%d ", dizi[j]);
	}
}





