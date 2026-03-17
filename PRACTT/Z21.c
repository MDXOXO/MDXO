// Program 29: Sum of factorials
void program29() {
    int n, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        int fact=1;
        for(int j=1; j<=i; j++) fact = fact*j;
        sum = sum + fact;
    }
    printf("Sum = %d\n", sum);
}