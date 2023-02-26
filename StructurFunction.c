#include <stdio.h>
#include <string.h>

struct person
{
    char name[100];
    int age;
    float cgpa;
};

void display(struct person p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("CGPA: %.2f\n", p.cgpa);
}

int main()
{
    struct person person1, person2;

    strcpy(person1.name, "Srayo");
    person1.age = 21;
    person1.cgpa = 4.00;

    display(person1);

    strcpy(person2.name, "Mariam");
    person2.age = 20;
    person2.cgpa = 4.00;

    display(person2);
}