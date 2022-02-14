#include <iostream>
#include <math.h>

void fatora(int n) {
    int nf = 0;
    int nsquared = ceil(sqrt(n));
    int primos[nsquared];

    primos[nf++] = 1;
    for (int i=2; i<=nsquared; i++) {
        while (n % i == 0) {
            primos[nf++] = i;
            n /= i;
        }
    }

    if (n > 1) {
        primos[nf++] = n;
    }

    printf("[");
    for (int i=0; i<nf; i++) {
        if (i != 0) printf(" ");
        printf("%d", primos[i]);
    }
    printf("]\n");
}

int main() {
    int n;
    printf("%d: ", n);
    fatora(n);
}