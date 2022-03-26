#include <iostream>

int fib(short int n, int* calls) {
    (*calls)++;
    if (n<2) return n;
    return fib(n-1, calls) + fib(n-2, calls);
}

int main() {
    int calls = -1, n;
    short int x;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%hd", &x);
        printf("fib(%hd) = %d calls = %d\n", x, calls, fib(x, &calls));
        calls = -1;
    }
}