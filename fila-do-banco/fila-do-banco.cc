#include <iostream>
int K = 1000000009;

int multiply_mod(int a, int b, int k) {
    long long la, lb;
    la = a;
    lb = b;
    return (la*lb) % k;
}

int fila_banco(int n) {
    int acc = 1;
    if (n == 3) return 1;
    for (int i=4; i<=n; i++) {
        acc = multiply_mod(acc, i, K);
    }
    return acc;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n != 0) {
        printf("%d\n", fila_banco(n));
        scanf("%d", &n);
    }
}