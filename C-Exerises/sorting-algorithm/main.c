

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
int x, m=1;
int k;
printf("------------*************------------\n");
printf("Welcome\n");
printf("enter the number of elements of the list: ");
scanf("%d", &x);
int dizi[x];
for(int i=1; i<=x; i++)
{
	printf("Enter the %d element of the array: ", m++);
	scanf("%d", &dizi[i]);
}
for(int j=1; j<=x; j++)
{
	for(int n=1; n<=x; n++)
	{
		if(dizi[n+1]<dizi[n])
		{
			k=dizi[n];
			dizi[n]=dizi[n+1];
			dizi[n+1]=k;
		}
	}
}
for(int f=1; f<=x; f++)
{
	printf("%d ", dizi[f]);
}
	

	
return 0;	
}






