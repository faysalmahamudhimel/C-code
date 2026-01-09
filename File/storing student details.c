#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("test2.txt", "a");

    char name[50];
    int age, number, num, i;

    if (file == NULL)
    {
        printf("File not exist\n");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter the number of student: ");
        scanf("%d", &num);
        getchar();   // newline clear

        for (i = 1; i <= num; i++)
        {
            printf("\nStudent %d\n", i);

            printf("Enter Name: ");
            fgets(name, sizeof(name), stdin);

            printf("Enter age: ");
            scanf("%d", &age);

            printf("Enter Number: ");
            scanf("%d", &number);
            getchar();   // newline clear

            fprintf(file, "%s\t\t%d\t%d\n", name, age, number);
        }

        fclose(file);
        printf("\nData successfully written to file\n");
    }

    return 0;
}
