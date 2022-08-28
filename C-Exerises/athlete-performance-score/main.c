#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
struct athlete{
char name[25];
char surname[25];
double performanceScore;
int judge[10];


}athlete_1;
int a=1;
strcpy(athlete_1.name,"Leyla");
strcpy(athlete_1.surname,"Dumenci");
for(int i=0; i<10; i++)
{
    printf("Enter the %d referee's score: ",a++);
    scanf("%d",&athlete_1.judge[i]);
}
int temp;
for(int j=0; j<10; j++)
{
    for(int k=0; k<10; k++)
    {
        if(athlete_1.judge[j]<athlete_1.judge[k])
        {
            temp=athlete_1.judge[j];
            athlete_1.judge[j]=athlete_1.judge[k];
            athlete_1.judge[k]=temp;
        }
    }
}
double total;
for(int f=1; f<9; f++)
{
    total=total+athlete_1.judge[f];
}
athlete_1.performanceScore=total/8;
printf("athlete ismi: %s\n",athlete_1.name);
printf("athlete soyadi: %s\n",athlete_1.surname);
printf("athlete performans puani: %.3lf",athlete_1.performanceScore);





return 0;
}








