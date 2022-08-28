#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
struct bilgi{
char owner[25];
char license_plate [10];
int model;
char brand[25];
}car1,car2,car3;


int main(){
char get_license_plate[25];
printf("who owns the car1? ");
scanf("%s",&car1.owner);
printf("what is the license plate of the car1? ");
scanf("%s",&car1.license_plate);
printf("What is the brand of the car1? ");
scanf("%s",&car1.brand);
printf("what is the model of the car1 ");
scanf("%d",&car1.model);
printf("\n");

printf("who owns the car2? ");
scanf("%s",&car2.owner);
printf("what is the license plate of the car2? ");
scanf("%s",&car2.license_plate);
printf("What is the brand of the car2? ");
scanf("%s",&car2.brand);
printf(what is the model of the car2? ");
scanf("%d",&car2.model);
printf("\n");

printf("who owns the car3? ");
scanf("%s",&car3.owner);
printf("what is the license plate of the car3? ");
scanf("%s",&car3.license_plate);
printf("What is the brand of the car3? ");
scanf("%s",&car3.brand);
printf("what is the model of the car3? ");
scanf("%d",&car3.model);
printf("\n");


while(1)
{
    printf("Enter the plate you want to get information from: ");
    scanf("%s",&get_license_plate);
    if(strcmp(get_license_plate,car1.license_plate)==0 || strcmp(get_license_plate,car2.license_plate)==0 ||strcmp(get_license_plate,car3.license_plate)==0){

        break;
    }


}


if(strcmp(get_license_plate,car1.license_plate)==0)
{
    printf("ownerOftheCar: %s\n",car1.owner);
    printf("modelOfCar: %d\n",car1.model);
    printf("brandOfCar: %s\n",car1.brand);
}
else if(strcmp(get_license_plate,car2.license_plate)==0)
{
    printf("ownerOftheCar: %s\n",car2.owner);
    printf("modelOfCar: %d\n",car2.model);
    printf("brandOfCar: %s\n",car2.brand);

}
else if(strcmp(get_license_plate,car3.license_plate)==0)
{
    printf("ownerOftheCar: %s\n",car3.owner);
    printf("modelOfCar: %d\n",car3.model);
    printf("brandOfCar: %s\n",car3.brand);
}





return 0;
}








