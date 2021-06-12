#include <stdio.h>

// struct rectangle {
//     int length;
//     int width;
// };

// int main() {
//     struct rectangle myRectangle = { 5, 2 };
//     printf("Length: %d   Width: %d \n", myRectangle.length, myRectangle.width);
//     return 0;
// }


// --------------- ALTERNATE WAY OF USING STRUCT AS DATA TYPE -------------------
typedef struct {
    int length;
    int width;
} rectangle;

typedef struct {
    int x;
    int y;
} position;

typedef struct {
    char owner[30];
    rectangle rectangle;
    position position;
} buildingPlan;

int main() {
    rectangle myRectangle = { 5, 2 };
    printf("Length: %d \nWidth: %d \n", myRectangle.length, myRectangle.width);

    buildingPlan myHouse = { "Adarsh", {20,5}, {32,64} };
    printf("The house at (%d,%d) with size of (%d,%d) is owned by %s \n",
        myHouse.position.x,
        myHouse.position.y,
        myHouse.rectangle.length,
        myHouse.rectangle.width,
        myHouse.owner);

    int pathSize = 3;
    position path[] = { {1,2}, {3,4}, {5,6} };

    for (int i = 0; i < pathSize; i++) {
        printf("Path %d: (%d,%d) \n", i + 1, path[i].x, path[i].y);
    }

    // Pointer to a struct
    buildingPlan* myHousePointer = &myHouse;
    // Access value via a struct pointer
    printf("Position x: %d \n", myHousePointer->position.x);
    return 0;
}

