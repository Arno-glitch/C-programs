//Program to calculate surface area of a cylinder
#include <stdio.h>
#define pi 3.14
int main() {
 float radius,height,surface_area;
 printf("Enter the radius:\n");
 scanf("%f",&radius);
 printf("Enter the height:\n");
 scanf("%f",&height);
 surface_area=2*pi*radius*radius+(2*pi*radius*height);
 
printf("surface_area:%.2lf\n",surface_area);

    return 0;
}
