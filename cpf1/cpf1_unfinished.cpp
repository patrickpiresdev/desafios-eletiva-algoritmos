#include <iostream>
using namespace std;

bool is_decimal_digit(char c) { return 48<=c; }
short int char_to_decimal_digit(char c) { return c-48; }

short int remainder(int n) {
    short int rem = n % 11;
    return rem == 10 ? 0 : rem;
}

char* validate(char* cpf) {
    short int c, sum1 = 0, sum2 = 0, counter = 1;
    for (int i=0; i<11; i++) {
        if (is_decimal_digit(cpf[i])) {
            c = char_to_decimal_digit(cpf[i]);
            sum1 += c*counter;
            sum2 += c*(10-counter);
            counter++;
        }
    }

    if (remainder(sum1) != char_to_decimal_digit(cpf[12])) return "CPF invalido";
    if (remainder(sum2) != char_to_decimal_digit(cpf[13])) return "CPF invalido";
    return "CPF valido";
}

int main() {
    char cpf[14];
    while (scanf("%s", cpf)) printf("%s\n", validate(cpf));
}