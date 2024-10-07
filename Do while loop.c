//Do..while loop to print the cube of numbers
#include <stdio.h>

int main() {
    int i = 1, n;

    // Prompt user for input
    printf("Input the number of terms: ");
    scanf("%d", &n);

    // Do..while loop to calculate and print the cube of each number
    do {
        printf("Number is : %d and cube of %d is : %d\n", i, i, i * i * i);
        i++;
    } while (i <= n);

    return 0;
}
