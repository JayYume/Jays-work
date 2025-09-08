#include <stdio.h>

int main(void){
    
    // makes variables for playground radius and walkway width
    int playground_radius;
    int walkway_width;

    //prompts the user to enter the playgroud radius
    printf("Enter the radius of the circular playground: ");
    scanf("%d", &playground_radius);

    //prompts the user to enter the walkway width
    printf("Enter the width of the walkway: ");
    scanf("%d", &walkway_width);

    //calculates the walkway area
    int playground_area = 3 * playground_radius * playground_radius;
    int large_circle_radius = playground_radius + walkway_width;
    int large_circle_area = 3 * large_circle_radius * large_circle_radius;
    int walkway_area = large_circle_area - playground_area;

    //prints the walkway area
    printf("The area of the walkway is: %.2d\n", walkway_area);
}
