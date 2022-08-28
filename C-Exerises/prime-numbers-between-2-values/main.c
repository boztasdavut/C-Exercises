#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int flag=0;
int beginning;
int ending;
printf("enter the initial value: ");
scanf("%d",&beginning);
printf("enter the ending value: ");
scanf("%d",&ending);
for(int i=beginning; i<=ending; i++)
{
    for(int j=2; j<i; j++)
    {
        if(i%j==0)
        {
            flag++;
        }
    }
    if(flag==0){
      printf("%d\n",i);
    }
    flag=0;
}









return 0;
}


















