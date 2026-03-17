// Program 28: Alternating harmonic series
void program28() {
    int n; float sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(i%2==0) sum = sum - (1.0/i);
        else sum = sum + (1.0/i);
    }
    printf("Sum = %f\n", sum);
}