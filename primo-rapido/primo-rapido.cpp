#include <iostream>
#include <math.h>

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

int nc = 65536;
int* C = crivo(nc);

bool ehprimo(int n) {
    if (n < 2) return false;
    if (n <= nc) return C[n] == n;
    for (int i=1; i<=ceil(sqrt(n)); i++) {
        if (ehprimo(i) && n % i == 0) return false;
    }
    return true;
}

int main() {
    short int n;
    int p;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &p);
        printf("%s\n", ehprimo(p) ? "Prime" : "Not Prime");
    }
}