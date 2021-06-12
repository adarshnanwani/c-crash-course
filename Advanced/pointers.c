#include <stdio.h>

void square(int* num) {
    *num *= *num;
}

void sizeExample(int arr[]) {
    printf("Memory size of arr = %lu \n", sizeof(arr));
}

int main() {
    // int a = 100;
    // int* b = &a;
    // printf("a = %d \n", a);
    // printf("b = %d \n", b); // b just points to location in memory
    // printf("*b = %d \n", *b); // *b refers to the addess of a (&a)

    // a = 200;
    // printf("After updating value of a to 200 \n");
    // printf("a = %d \n", a);
    // printf("b = %d \n", b); // b just points to location in memory
    // printf("*b = %d \n", *b); // *b refers to the addess of a (&a)

    // *b = 300;
    // printf("After updating value of *b to 200 \n");
    // printf("a = %d \n", a);
    // printf("b = %d \n", b); // b just points to location in memory
    // printf("*b = %d \n", *b); // *b refers to the addess of a (&a)

    // int c = 4000;
    // b = &c;
    // printf("a = %d \n", a);
    // printf("b = %d \n", b); // b just points to location in memory
    // printf("*b = %d \n", *b); // *b refers to the addess of a (&a)

    // int x = 5;
    // square(&x);
    // printf("%d \n", x);

    int size = 6;
    int ages[] = { 2, 32, 44, 65, 24, 64 };

    printf("Memory size of ages = %lu \n", sizeof(ages));
    sizeExample(ages); // prints size of pointer to ages
    return 0;
}
