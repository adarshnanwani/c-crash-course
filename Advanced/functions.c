#include <stdio.h>
#include "library.h"


int main() {
    int x = 5;

    int xSquared = square(x);

    printf("%d \n", xSquared);

    int xToPowerFive = recursivePower(x, 5);
    printf("%d \n", xToPowerFive);


    int size = 13;
    int ages[] = { 12,12,3,4,12,76,34,55,66,32,11,33,65 };
    printf("Oldest age: %d \n", biggestNumber(ages, size));

    return 0;
}

// Command to compile and link libraries and run the final output
// gcc -c functions.c library.c && gcc functions.o library.o -o lib-file && lib-file
// <-------- COMPILE --------->    <--------------- LINK -------------->    <- RUN ->
