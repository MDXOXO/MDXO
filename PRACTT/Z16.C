// Program 24: Armstrong number
void program24() {
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum = sum + digit*digit*digit;
        temp = temp / 10;
    }
    if(sum == num) printf("Armstrong number\n");
    else printf("Not Armstrong\n");
}
