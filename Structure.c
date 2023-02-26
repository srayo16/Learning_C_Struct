#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int x;
    float y;
};

int main()

{
    struct person person1, person2;
    strcpy(person1.name, "srayo");
    person1.x = 45;
    person1.y = 50.52;
    strcpy(person2.name, "Mariam");
    person2.x = 40;
    person2.y = 45.22;

    printf("Person Couple: \n");
    printf("Name: %s\n", person1.name);
    printf("X: %d\n", person1.x);
    printf("Y: %.2f\n", person1.y);
    printf("Name: %s\n", person2.name);
    printf("X: %d\n", person2.x);
    printf("Y: %.2f\n", person2.y);

    printf("Good Job!");
}