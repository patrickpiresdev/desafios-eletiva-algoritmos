#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> fatora(int n) {
    int nsquared = ceil(sqrt(n));
    vector<int> primos;

    for (int i=2; i<=nsquared; i++) {
        while (n % i == 0) {
            primos.push_back(i);
            n /= i;
        }
    }

    if (n > 1) {
        primos.push_back(n);
    }

    return primos;
}

void printvec(vector<int> l) {
    printf("[");
    for (int i=0; i<l.size(); i++) {
        if (i != 0) printf(" ");
        printf("%d", l[i]);
    }
    printf("]\n");
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> primos = fatora(n);
    printvec(primos);
}