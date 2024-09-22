//Program to calculate simple interest
#include <stdio.h>

int main() {
  float s,p,r,t;
printf("Enter the principal:\n");
scanf("%f",&p);
printf("Enter the rate:\n");
scanf("%f",&r);
printf("Enter the time:\n");
scanf("%f",&t);
s=(p*r*t)/100;
printf("simple interest:%.2lf\n",s);
return 0;
}
