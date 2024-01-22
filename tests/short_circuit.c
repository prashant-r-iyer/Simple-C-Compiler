long f1() {
    printf("First function\n");
    return 1;
}

long f2() {
    printf("Second function\n");
    return 0;
}

void main() {
    if (f1() || f2()) {
        printf("Or passed\n");
    }
    else {
        printf("Or failed\n");
    }

    if (f2() && f1()) {
        printf("And passed\n");
    }
    else {
        printf("And failed\n");
    }

    printf("End\n");
}