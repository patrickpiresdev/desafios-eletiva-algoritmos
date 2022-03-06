#include <iostream>

// para numeros pequenos (ate 10000)
bool eh_primo(short int n) {
    for (short int i=2; i<n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    short int n;
    scanf("%hd", &n);
    printf("%s", eh_primo(n) ? "PRIMO\n" : "NAO PRIMO\n");
}