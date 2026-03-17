// Program 32: Binary to Decimal
void program32() {
    int bin, dec=0, base=1;
    printf("Enter binary number: ");
    scanf("%d", &bin);
    while(bin>0) {
        int rem = bin%10;
        dec = dec + rem*base;
        base = base*2;
        bin = bin/10;
    }
    printf("Decimal = %d\n", dec);
}