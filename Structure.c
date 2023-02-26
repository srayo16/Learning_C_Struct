#include <stdio.h>
#include <string.h>

// Global Struct
struct person
{
    char name[20];
    int x;
    float y;
};

// Global Variable
struct person person1, person2;

int main()

{
    // Local Struct
    // struct person
    // {
    //     char name[20];
    //     int x;
    //     float y;
    // };

    // Local Variable
    // struct person person1, person2;

    strcpy(person1.name, "srayo");
    person1.x = 45;
    person1.y = 50.52;
    strcpy(person2.name, "Mariam");
    person2.x = 40;
    person2.y = 45.22;

    printf("Person Single: \n");
    printf("Name: %s\n", person1.name);
    printf("X: %d\n", person1.x);
    printf("Y: %.2f\n", person1.y);

    printf("Good Job!");

    return 0;
}