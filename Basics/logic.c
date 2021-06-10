#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 27;
    double money = 30000;
    bool isGrad = true;
    if (age > 17 && money > 2500 || isGrad)
    {
        printf("This is true\n");
    }

    int menuChoice = 2;
    switch (menuChoice)
    {
    case 1:
        break;
    case 2:
        printf("This is 2\n");
        break;
    default:
        printf("This is default");
        break;
    }

    double balance = -5000;
    balance > 0 ? printf("You have money\n") : printf("No money\n");

    return 0;
}
