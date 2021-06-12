#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> // required for the memory functions

// void fun() {
//     int static x = 0; // once initialized, scoped here only
//     x++;
//     printf("x = %d \n", x);
// }

// int main() {
//     int x = 5;
//     fun();
//     fun();
//     fun();
//     return 0;
// }


typedef struct {
    char name[30];
    int age;
    bool isVerified;
} user;

user* createUser(char name[], int age, bool isVerified) {
    user* newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
};

int main() {
    // int size;
    // printf("How many int elemends do you need? ");
    // scanf("%d", &size);

    // int* arr = malloc(size * sizeof(int)); // Allocate memory and return pointer of type int --- might return null if memory not available

    // if (arr == 0) {
    //     printf("Invalid pointer. Error allocating memory.\n");
    //     return -1;
    // }
    // else {
    //     printf("Good to go.\n");
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }


    // printf("Your Array: \n");

    // for (int i = 0; i < size; i++)
    // {
    //     printf("arr[%d]: %d \n", i, arr[i]);
    // }



    // free(arr);

    user* me = createUser("Adarsh", 29, true);

    printf("%s \n", me->name);
    printf("%d \n", me->age);
    printf("%d \n", me->isVerified);

    free(me);

    return 0;
}
