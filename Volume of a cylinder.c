//program to calculate volume of a cylinder
#include <stdio.h>
#define pi 3.14
int main() {

 float radius,height,volume;
printf("Enter the radius:\n");
scanf("%f",&radius);
printf("Enter the height\n");
scanf("%f",&height);
volume=pi*radius*radius*height;
printf("volume:%.4lf",volume);
 

    return 0;
}
