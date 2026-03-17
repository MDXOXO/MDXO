



















// ---------------- Programs 34–42 ----------------













// Program 40
void program40() {
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=i; j++) printf("%d ", j);
        printf("\n");
    }
}

// Program 41
void program41() {
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=i; j++) printf("%d ", i);
        printf("\n");
    }
}

// Program 42
void program42() {
    for(int i=1; i<=3; i++) {
        for(int j=3; j>=4-i; j--) printf("%d ", j);
        printf("\n");
    }
}

// ---------------- Main ----------------
int main() {
    // Call whichever program you want to test:
    program22();
    // Example: replace with program34(); or program39(); etc.
    return 0;
}
