
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
int dizi[11];
int x,y,i,j,m,n;
srand(time(0));
for(i=1; i<=10; i++)
{
	dizi[i]=rand()%100;
}
for(j=1; j<=10; j++)
{
	printf("%d ", dizi[j]);
}
printf("\nWhich element of the array do you want to enter?\n");
scanf("%d", &x);
printf("Enter a number: ");
scanf("%d", &y);

for(m=10; m>=x; m--)
{
	
	dizi[m+1]=dizi[m];
}
dizi[x]=y;
for(n=1; n<=11; n++)
{
	printf("%d ", dizi[n]);
}
	
return 0;	
}






