#include <iostream>
#include <vector>
#include <math.h>

std::vector<short int> fatora(short int n) {
    std::vector<short int> fatores;
    for (short int i=2; i<=ceil(sqrt(n)); i++) {
        while (n % i == 0) {
            fatores.push_back(i);
            n /= i;
        }
    }

    if (n>1) fatores.push_back(n);
    return fatores;
}

std::vector<short int> divisores(short int n) {
    std::vector<short int> fatores = fatora(n);
    std::vector<short int> divisores;

    short int k = fatores[0];
    divisores.push_back(1);
    divisores.push_back(k);
    short int nda = 1; // numero de divisores anteriores

    for (short int i=1; i<fatores.size(); i++) {
        if (fatores[i] == fatores[i-1]) {
            k *= fatores[i];
        } else {
            k = fatores[i];
            nda = divisores.size();
        }

        for (short int i=0; i<nda; i++) {
            divisores.push_back(k*divisores[i]);
        }
    }

    return divisores;
}

int main() {
    short int n;
    scanf("%hd", &n);
    for (short int d : divisores(n)) {
        printf("%hu ", d);
    }
    printf("\n");
}