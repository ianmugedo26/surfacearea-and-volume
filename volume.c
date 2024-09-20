#include <stdio.h>

int main() {
    int radius, height;//surface area and volume of cylinder
    int pi = 3.14159;
    int area, volume;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    printf("Enter the height: ");
    scanf("%d", &height);

    area = 2 * pi * radius * radius + 2 * pi * radius * height;
    printf("The surface area is %d \n", area);

    volume = pi * radius * radius * height;
    printf("The volume is %d \n", volume);

    return 0;
}
