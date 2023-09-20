#include <stdio.h>

int main() {
    int choice;
    double area;

    printf("Choose a shape to calculate the area:\n");
    printf("11: Circle\n");
    printf("22: Rectangle\n");
    printf("33: Square\n");
    printf("44: Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 11:
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = 3.14159265359 * radius * radius; // Pi * r^2
                printf("Area of the circle: %.2lf\n", area);
                break;
            }
        case 22:
            {
                double length, width;
                printf("Enter the length and width of the rectangle: ");
                scanf("%lf %lf", &length, &width);
                area = length * width;
                printf("Area of the rectangle: %.2lf\n", area);
                break;
            }
        case 33: 
                double side;
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                area = side * side;
                printf("Area of the square: %.2lf\n", area);
                break;
            
        case 44:
            {
                double base, height;
                printf("Enter the base and height of the triangle: ");
                scanf("%lf %lf", &base, &height);
                area = 0.5 * base * height; // (1/2) * base * height
                printf("Area of the triangle: %.2lf\n", area);
                break;
            }
        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
    }

return 0;
}