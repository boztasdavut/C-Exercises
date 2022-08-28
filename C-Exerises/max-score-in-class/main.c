

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int x;
int maxScore,maxno;
printf("how many students are in the class ");
scanf("%d", &x);
int sinav[x];
int no[x];
for(int i=0; i<x; i++)
{
	printf("Enter student number \n");
	scanf("%d", &no[i]);
	printf("Enter the exam grade: \n");
	scanf("%d",&sinav[i]);
	printf("\n\n");
}
maxScore=0;
for(int i=0; i<x; i++)
{
	if(sinav[i]>maxScore)
	{
		maxScore=sinav[i];
		maxno=no[i];
	}
}
printf("%d  %d .", maxno, maxScore);


return 0;
}