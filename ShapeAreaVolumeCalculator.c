// Program Name: ShapeAreaVolumeCalculator.c
// Description: This program calculates:
//              1. Area of a Rectangle
//              2. Area of a Circle
//              3. Volume of a Cylinder
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    // Declare variables for dimensions
    int length, breadth, circleRadius, height, cylinderRadius;

    // --- Input Section ---
    // Rectangle dimensions
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Circle radius
    printf("Enter the radius of the circle: ");
    scanf("%d", &circleRadius);

    // Cylinder dimensions
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &cylinderRadius);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    // --- Calculation & Output Section ---
    // Area of Rectangle
    printf("\n--- Results ---\n");
    printf("Area of Rectangle: %d square units\n", length * breadth);

    // Area of Circle (π = 3.14)
    printf("Area of Circle: %.2f square units\n", 3.14 * circleRadius * circleRadius);

    // Volume of Cylinder (π = 3.14)
    printf("Volume of Cylinder: %.2f cubic units\n", 3.14 * cylinderRadius * cylinderRadius * height);

    return 0;
}
