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
    if (person1.name == person2.name || person1.x == person2.x)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    printf("\nGood Job!");

    return 0;
}