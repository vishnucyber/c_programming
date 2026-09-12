#include <stdio.h>
#include <math.h>
int  main(void){
    double  radius  = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;

    const double PI = 3.141519;

    printf("Welcome to the circle calculator");
    printf("Enter the radius: ");
    scanf("%lf",&radius);

    area = PI * pow(radius,2);
    surface_area = 4 * PI * pow(radius,2);
    volume = 4 * PI * pow(radius,3);
    printf("\nArea: %lf\n",area);
    printf("Surface Area: %lf\n",surface_area);
    printf("Volume: %lf\n",volume);

   return 0;

}


