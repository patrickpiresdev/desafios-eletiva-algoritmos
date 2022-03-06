#include <iostream>
#include <math.h>
#include <vector>

// para numeros pequenos (ate 10000)
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

int main() {
    short int n;
    scanf("%hd", &n);
    for (short int f : fatora(n)) {
        printf("%hu ", f);
    }
    printf("\n");
}