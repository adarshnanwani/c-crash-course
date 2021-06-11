#include <stdio.h>

void printName() {

    int zero = 0;
    int nine = 9;
    printf("Choose a number between %d and %d : ", zero, nine);

    int input;
    do
    {
        scanf("%d", &input);
    } while (input < 0 || input > 9);
}

int main()
{
    // initialization
    // comparison
    // update

    /*
        3 types of loops:
            1. for
            2. while
            3. do while
    */

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    ////////////////////////////

    int size = 10;
    int ages[] = { 12, 34, 546, 7, 4, 22, 143, 56, 77, 44 };
    int calculatedSize = sizeof(ages) / sizeof(ages[0]);

    for (int j = 0; j < calculatedSize; j++)
    {
        printf("ages[%d] = %d\n", j, ages[j]);
    }

    ////////////////////////////

    // int k = 0;
    // while (k < 10)
    // {
    //     printf("%d \n", k);
    //     k++;
    // }

    ////////////////////////////
    printName();

    return 0;
}
