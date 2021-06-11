#include <stdio.h>

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}

int power(int num, int exponent) {
    int total = 1;
    for (int i = 0; i < exponent; i++)
    {
        total *= num;
    }
    return total;
}

// Recursive function
int recursivePower(int num, int exponent) {
    if (exponent == 1) return num;
    int total = 1;
    total = num * recursivePower(num, exponent - 1);
    return total;
}

// Function with array argument
int biggestNumber(int arr[], int size) {
    int largest;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= largest) {
            largest = arr[i];
        }
    }
    return largest;
}

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
