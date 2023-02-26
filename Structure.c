#include <stdio.h>

struct person
{
    char name;
    int x;
    float y;
};

int main()

{
    struct person person1, person2;
    person1.name = "srayo";
    person1.x = 45;
    person1.y = 50.52;
    person2.name = "Mariam";
    person2.x = 40;
    person2.y = 45.22;

    printf("Ami Raja");
}