#include <stdio.h>

// ---------------- Programs 22–33 ----------------

// Program 22: Sum of digits
void program22() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("Sum of digits = %d\n", sum);
}
