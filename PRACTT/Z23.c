// Program 31: Series S = 1/1! + 2/2! + ... up to 7 terms
void program31() {
    float sum=0;
    for(int i=1; i<=7; i++) {
        int fact=1;
        for(int j=1; j<=i; j++) fact = fact*j;
        sum = sum + (float)i/fact;
    }
    printf("Sum = %f\n", sum);
}
