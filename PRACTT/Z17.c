// Program 25: Perfect number
void program25() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<num; i++) {
        if(num % i == 0) sum = sum + i;
    }
    if(sum == num) printf("Perfect number\n");
    else printf("Not Perfect\n");
}