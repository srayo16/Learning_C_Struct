#include <stdio.h>
#include <string.h>

// Global Struct
struct person
{
    char name[50];
    int age;
    float cgpa;
};
// fflush(stdin)

struct person person[4];
int main()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Person: %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", &person[i].name);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);
        printf("Enter CGPA: ");
        scanf("%f", &person[i].cgpa);
    }

    for (i = 0; i < 4; i++)
    {
        printf("\n\nName: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("CGPA: %.2f\n", person[i].cgpa);
    }

    printf("\n\nGood Job!");

    return 0;
}