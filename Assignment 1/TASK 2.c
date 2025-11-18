#include <stdio.h>
#include <math.h>

int main() {
    float radius, surface_area;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Error: Radius cannot be negative!\n");
        return 1;
    }

    // Formula for surface area of sphere: 4 * π * r²
    surface_area = 4 * M_PI * radius * radius;

    printf("\nSphere Surface Area Calculation:\n");
    printf("Radius: %.2f\n", radius);
    printf("Surface Area: %.2f square units\n", surface_area);

    return 0;
}
