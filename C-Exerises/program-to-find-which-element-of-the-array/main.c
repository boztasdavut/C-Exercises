#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){
int liste1[10]={45,76,19,82,11,49,32,99,14,71,'\0'};

int number;
int flag=0;
printf("Enter a number you want to find: ");
scanf("%d",&number);
for(int i=0; i<10; i++)
{
    if(*(liste1+i)==number)
    {
        printf("%d element of the list is the number you want",i+1);
        flag++;
    }
}
if(flag==0)
{
    printf("value not listed");
}








return 0;
}











