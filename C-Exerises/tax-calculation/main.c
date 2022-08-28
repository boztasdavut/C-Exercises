/* ürün tipinin ve fiyatinin girilmesinin ardından vergi eklenerek ödenecek toplam tutarı hesaplayan program */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int x;
double price;
printf("For book 0, for staple food 1, for luxury product 2 ");
scanf("%d", &x);
switch(x)
{
	case 0:
		printf("Enter the price of the product: ");
		scanf("%lf", &price);
		printf("The amount you have to pay: %.1lf", price+price*4/100);
		break;
	case 1:
		printf("Enter the price of the product: ");
		scanf("%lf", &price);
		printf("The amount you have to pay: %.1lf", price+price*56/1000);
		break;
	case 2:
		printf("Enter the price of the product: ");
		scanf("%lf", &price);
		printf("The amount you have to pay: %.1lf", price+price*196/1000);
		break;
	
	
	
}

	

return 0;
}

