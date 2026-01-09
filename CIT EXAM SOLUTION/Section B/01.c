
\\Define a structure data type called time_struc containing three members: integer hour, integer minute and integer second. Develop a C program that would assign values to the individual members and display time in the following format: (40:5:3)


#include <stdio.h>

struct time_struc {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time_struc t;

    // Assigning values
    t.hour = 40;
    t.minute = 5;
    t.second = 3;

    // Displaying time in (hour:minute:second) format
    printf("(%d:%d:%d)\n", t.hour, t.minute, t.second);

    return 0;
}

