#include <stdio.h>
#include <math.h>
int  main(void){
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 1;
    double total = 0.0;

    printf("//Compound Interest Calculator//: \n");

    printf("Enter the principal: ");
    scanf("%lf",&principal);

    printf("Enter the rate (r):");
    scanf("%lf",&rate);
    rate = rate /100;

    printf("Enter the # of years: ");
    scanf("%d",&years);

    total = principal * pow(1 + rate/timesCompounded,timesCompounded * years);

    printf("\nThe total price is $%.2lf",total);
  

  
 

   return 0;

}