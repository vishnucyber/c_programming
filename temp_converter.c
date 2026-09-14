#include <stdio.h>

int main(){
    int choice = 0;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("///Temperature Converter///\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");

    printf("Enter choice(1/2): ");
    scanf("%d",&choice);

    if (choice == 1){
        printf("Enter temp in celsius: ");
        scanf("%f",&celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.1f celsius = %.1ffahrenheit",celsius,fahrenheit);
    }
    else if (choice == 2){
        printf("Enter temp in fahrenheit: ");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("%.1f fahrenheit = %.1fcelsius",fahrenheit,celsius);
    }
    else {
        printf("Invalid input enter either (1/2)");
    }
    return 0;
}