#include <stdio.h>

struct person
{
    int age;
    float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f \n", personPtr->weight);

    printf("Displaying:\n");
    printf("weight: %d \n", person1.age);
    printf("weight: %f \n", person1.weight);

    return 0;
}