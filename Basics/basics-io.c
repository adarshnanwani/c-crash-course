#include <stdio.h>

int main()
{
    printf("Hello world\n");

    int x = 50;
    int y;  // declaration
    y = 10; // initialization
    printf("%s World\n", "Hello!");

    printf("The value of x is %d\n", x);

    printf("X: %d, Y: %d\n", x, y);

    int radius;
    printf("Please enter radius:");
    scanf("%d", &radius); // address-of operator (pointer)

    printf("Circumference: %f", 2 * 3.14 * radius);

    char name[20]; // char array of 20 chars. '\0' - null terminator is last char
    scanf("%19s", name);

    printf("Your name: %s \n", name);
    return 0;
}
