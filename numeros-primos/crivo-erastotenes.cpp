#include <iostream>
#include <vector>
#include <math.h>

std::vector<unsigned int> crivo(unsigned int n) {
    std::vector<unsigned int> c;
    for (unsigned int i=2; i<=n; i++) {
        c.push_back(i);
    }

    unsigned int k;
    for (unsigned int i=2; i<=ceil(sqrt(n)); i++) {
        if (c[i-2] == i) {
            k=i+i;
            while (k<=n) {
                c[k-2] = 0;
                k += i;
            }
        }
    }

    return c;
}

int main() {
    unsigned int UINT_MAX = 65535;
    for (unsigned int e : crivo(UINT_MAX)) {
        printf("%u ", e);
    }
    printf("\n");
}