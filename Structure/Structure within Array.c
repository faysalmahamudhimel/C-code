#include <stdio.h>

// create struct
struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("\nEnter information of person %d\n", i + 1);

        printf("Enter name: ");
        getchar(); // previous input buffer clear
        fgets(person[i].name, sizeof(person[i].name), stdin);

        printf("Enter Age: ");
        scanf("%d", &person[i].age);

        printf("Enter salary: ");
        scanf("%f", &person[i].salary);
    }

    printf("\n===== Displaying Information =====\n");

    for (i = 0; i < 4; i++)
    {
        printf("\nInformation of person %d\n", i + 1);
        printf("NAME   : %s", person[i].name);
        printf("AGE    : %d\n", person[i].age);
        printf("SALARY : %.1f\n", person[i].salary);
    }

    return 0;
}
