#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int x;
    float y;
};

struct person person1, person2, person3;

int main()
{
    person1.x = 55;
    // strcpy(person1.name, "Srayo");
    printf("Enter Your Name: ");
    scanf("%s", &person1.name);
    printf("Enter Your CGPA: ");
    scanf("%f", &person1.y);
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.x);
    printf("CGPA: %.2f\n", person1.y);

    return 0;
}