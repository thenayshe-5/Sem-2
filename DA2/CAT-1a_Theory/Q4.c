/*ABC car showroom sells various types of cars such as Hatchback, Sedan, 
SUVs, and MUV. Due to the year-end sale, the showroom provides a 3%, 5%, 
10%, and 15% discount for various car models Hatchback, Sedan, SUV, and 
MUV respectively. Also applies 12% of GST for the total amount of purchase 
Write a C program to implement the above scenario which will read the 
type_of_the_car, price_of_the_car and extra-fitting_price_of_the_car as input 
from the user and estimate the Net amount to be paid to the showroom. If the 
type of car is other than Hatchback, Sedan, SUV, and MUV then display 
“Invalid Type”.*/

#include <stdio.h>
#include <string.h>

int main() {
    char type_of_the_car[10];
    char *ptr = type_of_the_car;
    int price_of_the_car, extra_fitting_price_of_the_car;
    int net, disc=0;
    printf("Price of the car: ");
    scanf("%d",&price_of_the_car);
    printf("Extra-fitting price of the car: ");
    scanf("%d",&extra_fitting_price_of_the_car);
    printf("Type of the car: ");
    scanf("%s",ptr);
    //fgets(type_of_the_car,10,stdin);
    if (strcmp(type_of_the_car,"Hatchback") != 0 && strcmp(type_of_the_car,"Sedan") != 0 && strcmp(type_of_the_car,"SUV") != 0 && strcmp(type_of_the_car,"MUV") != 0)
    {
        printf("Invalid Type.");
    }
    if (strcmp(type_of_the_car,"Hatchback") == 0)
    {
        disc = (price_of_the_car+extra_fitting_price_of_the_car)*0.03;
    }
    else if (strcmp(type_of_the_car,"Sedan") == 0)
    {
        disc = (price_of_the_car+extra_fitting_price_of_the_car)*0.05;
    }
    else if (strcmp(type_of_the_car,"SUV") == 0)
    {
        disc = (price_of_the_car+extra_fitting_price_of_the_car)*0.1;
    }
    else if (strcmp(type_of_the_car,"MUV") == 0)
    {
        disc = (price_of_the_car+extra_fitting_price_of_the_car)*0.15;
    }

    net = (price_of_the_car+extra_fitting_price_of_the_car) - disc;
    net += 0.12*net;

    printf("Total amount to be paid = %d",net);
    

    return 0;
}