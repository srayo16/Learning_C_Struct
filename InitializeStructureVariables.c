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
struct person person1 = {"Srayo", 55, 3.98};

struct person person2, person3;

int main()

{

    strcpy(person1.name, "srayo");
    person1.x = 45;
    person1.y = 50.52;
    strcpy(person2.name, "Mariam");
    person2.x = 40;
    person2.y = 45.22;

    person3 = person2;

    printf("Person Couple: \n");
    printf("Name: %s\n", person1.name);
    printf("X: %d\n", person1.x);
    printf("Y: %.2f\n", person1.y);

    printf("Name: %s\n", person2.name);
    printf("X: %d\n", person2.x);
    printf("Y: %.2f\n", person2.y);

    printf("Name: %s\n", person3.name);
    printf("X: %d\n", person3.x);
    printf("Y: %.2f\n", person3.y);

    printf("Good Job!");

    return 0;
}