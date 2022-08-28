#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int numberofLesson;
char letterGrade;
double hours;
double total=0;
double totalHours=0;
printf("Kac adet dersiniz var: ");
scanf("%d", &numberofLesson);

for(int i=1; i<=numberofLesson; i++)
{
	
	printf("Enter your letter grade: \n");
	scanf(" %c", &letterGrade);
	

	switch(letterGrade)
	{
		case 'A':
		printf("Enter lesson hours: \n");
		scanf("%lf", &hours);
		total=total+hours*4;
		break;
		case 'B':
		printf("Enter lesson hours: \n");
		scanf("%lf", &hours);
		total=total+hours*3;
		break;
		case 'C':
		printf("Enter lesson hours: \n");
		scanf("%lf", &hours);
		total=total+hours*2;
		break;
		case 'D':
		printf("Kredi saatinizi giriniz: \n");
		scanf("%lf", &hours);
		total=total+hours*1;
		break;
		case 'F':
		printf("Enter lesson hours: \n");
		scanf("%lf", &hours);
		total=total+hours*0;
		break;
	}
	totalHours=totalHours+hours;
}
printf("Total lesson hours: %.0lf\n", totalHours);
printf("Your average = %.2lf\n",total/totalHours);


return 0;
}