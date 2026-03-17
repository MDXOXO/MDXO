// Program 30: Alternating odd cubes
void program30() {
    int n, sum=0, sign=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        int term = 2*i-1;
        sum = sum + sign*term*term*term;
        sign = -sign;
    }
    printf("Sum = %d\n", sum);
}