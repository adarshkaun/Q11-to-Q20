// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    printf("Discriminant: %.2lf\n", discriminant);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf, %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugate: %.2lf + %.2lfi, %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}