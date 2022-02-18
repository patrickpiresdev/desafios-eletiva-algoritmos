#include <iostream>
#include <math.h>

void printvec(int* vec, int n) {
    printf("[");
    int printed=0;
    for (int i=2; i<=n; i++) {
        if (vec[i] == i) {
            printf("%d", vec[i]);
            if (i != n) printf(" ");
            printed++;
        }
    }
    printf("]\n");
}

int* crivo(int n) {
    int t, d;
    int* C = (int*) malloc(sizeof(int)*(n+1));

    for (int i=1; i<=n; i++) {
        C[i] = i;
    }

    t = 2;

    for (int i=1; i<=n/2; i++) {
        C[t] = 2;
        t += 2;
    }

    for (int i=3; i<=ceil(sqrt(n)); i++) {
        if (C[i] == i) {
            t = i*i;
            d = i+i;
        }

        while (t<=n) {
            if (C[t] == t) {
                C[t] = i;
            }
            t += d;
        }
    }

    return C;
}

int main() {
    int n = 65536;
    int* C = crivo(n);
    printvec(C, n);
}