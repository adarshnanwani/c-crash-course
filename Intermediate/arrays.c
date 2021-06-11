#include <stdio.h>

int main() {
    int size = 7;
    int ages[] = { 1, 4, 60 , 43, 2, 33 };

    for (int i = 0; i < size; i++)
    {
        printf("%d \n", ages[i]);
    }

    ages[0] = 22; // reassignment
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", ages[i]);
    }


    // Multidimensional arrays
    int rows = 3;
    int const columns = 4;

    int studentGrades[4][4] = {
        {1,2,4,5},
        {2,3,5,7},
        {5,6,7,8}
    };

    for (int p = 0; p < rows; p++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", studentGrades[p][j]);
        }
        printf("\n");
    }


    return 0;
}
