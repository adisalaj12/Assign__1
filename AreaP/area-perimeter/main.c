#include <stdio.h>

float square_area(float side);
float square_perimeter(float side);
float circle_area(float radius);
float circle_circumference(float radius);

int main() {
    int option;
    float dimension, area, perimeter;

    printf("Enter an option (1 for square, 2 for circle): ");
    scanf("%d", &option);

    if (option == 1) {
        printf("Enter the side of the square: ");
        scanf("%f", &dimension);
        area = square_area(dimension);
        perimeter = square_perimeter(dimension);
        printf("Area of square: %.2f\n", area);
        printf("Perimeter of square: %.2f\n", perimeter);
    } else if (option == 2) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &dimension);
        area = circle_area(dimension);
        perimeter = circle_circumference(dimension);
        printf("Area of circle: %.2f\n", area);
        printf("Circumference of circle: %.2f\n", perimeter);
    } else {
        printf("Invalid option!\n");
    }

    return 0;
}

float square_area(float side) {
    return side * side;
}

float square_perimeter(float side) {
    return 4 * side;
}

float circle_area(float radius) {
    return 3.14159 * radius * radius;
}

float circle_circumference(float radius) {
    return 2 * 3.14159 * radius;
}
