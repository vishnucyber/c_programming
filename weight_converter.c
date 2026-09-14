#include <stdio.h>

int main(){
    int choice = 0;
    float pounds = 0.0f;
    float kilo = 0.0f;

    printf("//Weight Converter Calculator//\n");
    printf("1.Kilo to pounds\n");
    printf("2.pounds to Kilo\n");

    printf("Enter choice (1/2): ");
    scanf("%d",&choice);

    if (choice == 1){
        printf("Enter weight in kilos: ");
        scanf("%f",&kilo);
        pounds = kilo * 2.20462;
        printf("%.2f kg = %.2fpounds",kilo,pounds);
    }
    else if (choice == 2){
        printf("Enter weight in pounds: ");
        scanf("%f",&pounds);
        kilo = pounds / 2.20462;
        printf("%.2f pounds = %.2fkg",pounds,kilo);
    }
    else {
        printf("Invalid input give either 1 or 2");
    }
    return 0;
}