// Program 26: Sum of first n even numbers
void program26() {
    int n, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) sum = sum + 2*i;
    printf("Sum = %d\n", sum);
}