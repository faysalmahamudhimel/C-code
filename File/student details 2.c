#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    file = fopen("test3.txt", "a");

    char name[50], temp[20];
    int age, phone, num, i;

    if (file == NULL)
    {
        printf("File not exist\n");
        return 0;
    }

    printf("Enter number of students: ");
    fgets(temp, sizeof(temp), stdin);
    num = atoi(temp);

    fprintf(file, "NAME\tAGE\tPHONE\n");
    fprintf(file, "---------------------------\n");

    for (i = 1; i <= num; i++)
    {
        printf("\nStudent %d\n", i);

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Age: ");
        fgets(temp, sizeof(temp), stdin);
        age = atoi(temp);

        printf("Enter Phone: ");
        fgets(temp, sizeof(temp), stdin);
        phone = atoi(temp);

        fprintf(file, "%s\t%d\t%d\n", name, age, phone);
    }

    fclose(file);
    printf("\nData stored successfully!\n");

    return 0;
}
