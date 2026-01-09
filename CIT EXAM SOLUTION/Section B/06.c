//Define a structure data type time_struct including three members: hours, minutes, seconds. Develop a program to display standard time format.

#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time_struct t;

    printf("Enter hour minute and second: ");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);

    printf("Standard Time = %02d:%02d:%02d\n",
           t.hour, t.minute, t.second);

    return 0;
}

