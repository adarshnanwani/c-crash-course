#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;

    double b = 10.5; // 8 bytes = 64-bit number
    printf("%lu\n", sizeof(b));

    float c = 10.5; // 4 bytes = 32-bit number
    printf("%lu\n", sizeof(c));

    char d = 'a';

    char e[] = "char array"; /// aka a string

    bool f = false; // needs stdbool.h to work

    int zero = .999999; // Implcit type conversion - float to int
    printf("%d", zero);

    int slices = 17;
    int people = 2;

    // double slicesPerPerson = slices / people; // 08.000000
    double slicesPerPerson = (double)slices /* 17.0 unary operator*/ / people; // Typecasting the value
    printf("%lf\n", slicesPerPerson);

    double test1 = 25 / 2 * 2;   // 24.0
    double test2 = 25 / 2 * 2.0; // 24.0

    double test3 = 25.0 / 2 * 2.0;       // 25.0
    double test4 = (double)25 / 2 * 2.0; // 25.0

    printf("test3: %f\n", test3);
    printf("test4: %f\n", test4);

    return 0;
}
