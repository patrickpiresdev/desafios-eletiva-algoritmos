#include <iostream>

int mdc(int a, int b) {
    int r;
    while (b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int a, int b) {
    return a*b/mdc(a, b);
}

int main() {
    int n, a, b;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    while (n != 0) {
        printf("%d\n", (n/a)+(n/b)-(n/mmc(a, b)));
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);
    }
}