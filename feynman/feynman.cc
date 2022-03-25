#include <iostream>
#include <math.h>

int main() {
    short int n;
    int acc;
    scanf("%hd", &n);

    while (n != 0) {
        acc=0;
        for (short int i=1; i<=n; i++) {
            acc += pow(i, 2);
        }
        printf("%d\n", acc);
        scanf("%hd", &n);
    }
}