#include <stdio.h>
#include <string.h>

union Model
{
    int modelNum;
    char modelName[50];
};

struct Car
{
    char colour[50];
    char manufacturer[50];
    union Model model;
    char engineType[50];
};

int main(void)
{
    struct Car cars[5];

    // Car 1
    strcpy(cars[0].colour, "Red");
    strcpy(cars[0].manufacturer, "Toyota");
    strcpy(cars[0].model.modelName, "Camry");
    strcpy(cars[0].engineType, "4-Cylinder");

    // Car 2
    strcpy(cars[1].colour, "Silver");
    strcpy(cars[1].manufacturer, "Honda");
    strcpy(cars[1].model.modelName, "Civic");
    strcpy(cars[1].engineType, "4-Cylinder");

    // Car 3
    strcpy(cars[2].colour, "Blue");
    strcpy(cars[2].manufacturer, "Ford");
    strcpy(cars[2].model.modelName, "Mustang");
    strcpy(cars[2].engineType, "V8");

    // Car 4
    strcpy(cars[3].colour, "Black");
    strcpy(cars[3].manufacturer, "Chevrolet");
    strcpy(cars[3].model.modelName, "Corvette");
    strcpy(cars[3].engineType, "V8");

    // Car 5
    strcpy(cars[4].colour, "White");
    strcpy(cars[4].manufacturer, "Tesla");
    strcpy(cars[4].model.modelName, "Model S");
    strcpy(cars[4].engineType, "Electric");

    for (int i = 0; i < 5; i++)
    {
        printf("Car %d\n", i + 1);
        printf("  Colour: %s\n", cars[i].colour);
        printf("  Manufacturer: %s\n", cars[i].manufacturer);
        printf("  Model: %s\n", cars[i].model.modelName);
        printf("  Engine Type: %s\n", cars[i].engineType);
    }

    return 0;
}
