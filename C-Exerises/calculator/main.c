

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
float calculator(float x, char a, float y);
float x,y;
char a;
scanf("%f", &x);
scanf(" %c", &a);
scanf(" %f", &y);
printf("the result of the action you entered %.2f", calculator(x,a,y));





return 0;
}
float calculator(float x, char a, float y)
{
	switch(a)
	{
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
	}
}
