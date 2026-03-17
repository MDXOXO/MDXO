#include <stdio.h>
int main() {
    int daysLate;
    printf("Enter number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 5) {
        printf("Fine: Rs. %.2f\n", daysLate * 0.50);
    }
    else if (daysLate <= 10) {
        printf("Fine: Rs. %.2f\n", daysLate * 1.00);
    }
    else if (daysLate <= 30) {
        printf("Fine: Rs. %.2f\n", daysLate * 5.00);
    }
    else {
        printf("Membership cancelled!\n");
    }
    return 0;
}
