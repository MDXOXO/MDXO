// Program 33: Sum of odd fourth powers (first 100 odd numbers)
void program33() {
    long sum=0;
    for(int i=1; i<=100; i++) {
        int term = 2*i-1;
        sum = sum + term*term*term*term;
    }
    printf("Sum = %ld\n", sum);
}