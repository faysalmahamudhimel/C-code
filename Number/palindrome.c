#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // original number save করা

    // number reverse করা
    while(num != 0) {
        digit = num % 10;        // last digit
        reverse = reverse * 10 + digit; //number reverse
        num = num / 10;          // last digit remove
    }

    // compare
    if(reverse == original)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}
