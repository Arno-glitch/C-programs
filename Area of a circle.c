#include <stdio.h>
#include <math.h>


double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;

  
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = areaOfCircle(radius);


    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
