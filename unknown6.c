// Area of Circle Function
// No arguments and no return value
#include <stdio.h>
#define PI 3.14159

void area_of_circle() {
    float radius = 3.0;
    printf("Area of Circle: %.2f\n", PI * radius * radius);
}

int main() {
    area_of_circle();
    return 0;
}

// No arguments but a return value
#include <stdio.h>
#define PI 3.14159

float area_of_circle() {
    float radius = 3.0;
    return PI * radius * radius;
}

int main() {
    printf("Area of Circle: %.2f\n", area_of_circle());
    return 0;
}

// this is some random sh*t that i am pretending to do, please bear with me.

// #include <stdio.h>
// #define PI 3.14159


// Arguments but no return value
#include <stdio.h>
#define PI 3.14159

void area_of_circle(float radius) {
    printf("Area of Circle: %.2f\n", PI * radius * radius);
}

int main() {
    area_of_circle(3.0);
    return 0;
}

// Arguments with a return value
#include <stdio.h>
#define PI 3.14159

float area_of_circle(float radius) {
    return PI * radius * radius;
}

int main() {
    printf("Area of Circle: %.2f\n", area_of_circle(3.0));
    return 0;
}