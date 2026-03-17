// Program 27: Prime check
void program27() {
    int num, flag=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<=1) flag=0;
    for(int i=2; i<num; i++) {
        if(num % i == 0) { flag=0; break; }
    }
    if(flag) printf("Prime\n");
    else printf("Not Prime\n");
}