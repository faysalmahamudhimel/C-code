#include <stdio.h>

int main() {

    int n, i;

    // User এর কাছ থেকে সংখ্যা নেওয়া
    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 এবং 1 prime না
    if (n <= 1) {
        printf("Not Prime");
    }
    else {

        // 2 থেকে n-1 পর্যন্ত check করবো
        for (i = 2; i < n; i++) {

            // যদি n পুরোপুরি ভাগ যায়
            if (n % i == 0) {
                printf("Not Prime");   // তাহলে prime না
                return 0;              // প্রোগ্রাম এখানেই শেষ
            }
        }

        // যদি loop শেষ হয় কিন্তু একবারও ভাগ না যায়
        printf("Prime");
    }

    return 0;
}
