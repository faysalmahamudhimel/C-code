/*Show the address and values pointed by an array of pointers*/
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    
    // Array of pointers
    int *ptrArr[3];
    
    // Assign addresses to pointers
    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    // Print addresses and values
    for (int i = 0; i < 3; i++) {
        printf("Pointer %d points to address: %p and value: %d\n", 
               i+1, (void*)ptrArr[i], *ptrArr[i]);
    }

    return 0;
}
