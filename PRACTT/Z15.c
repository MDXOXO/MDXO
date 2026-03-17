// Program 23: Reverse number & Palindrome check
void program23() {
    int num, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }
    printf("Reverse = %d\n", rev);
    if(rev == num) printf("Palindrome\n");
    else printf("Not Palindrome\n");
}
