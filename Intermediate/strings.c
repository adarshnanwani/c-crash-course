#include <stdio.h>
#include <string.h>

int main() {
    char name[20]; // '\0'

    printf("What is your name? \n");
    scanf("%19s", name);

    int letter = 0;
    while (name[letter] != '\0') {
        letter++;
    }

    printf("Size of name is: %d \n", letter);

    // Length of string - strlen
    printf("Size of name is: %d \n", strlen(name)); // strlen from <string.h>

    // Compare two stings - strcmp
    if (strcmp(name, "Adarsh") == 0) {
        printf("Best name ever \n");
    }
    else {
        printf("Boo \n");
    }

    // Copy a string - strcpy
    char copy[20];
    strcpy(copy, name);

    printf("Copied name is %s \n", copy);

    // String concatenation - strcat

    char lastName[] = " Nanwani";
    strcat(copy, lastName);
    printf("Concatenated name is %s \n", copy);


    return 0;
}
