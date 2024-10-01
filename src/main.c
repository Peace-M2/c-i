#include <stdio.h>

int main() {
//declaration and initialization 
float principle,time,rate,simple interest;
printf("enter principle amount");
scanf("%f",&principle);
printf("enter time in years");
scanf("%f",&time);
printf("interest rate per annum");
scanf("%f",&rate);
simple interest=(principle*time*rate/100);
printf("simple interest in %•2f\n",simple interest);
return 0
}