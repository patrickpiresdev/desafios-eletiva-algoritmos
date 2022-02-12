/*
                                        ----- CPF 1 -----

Você foi contratado pelas Indústrias Udilandenses (INUDIL) para desenvolver uma maneira de verificar 
se o Cadastro de Pessoa Física (CPF) indicado por um cliente era válido ou não.
Conversando com amigos, você chegou à conclusão de que um CPF seria válido se a soma de todos os seus 
dígitos resultasse em número múltiplo de 11. Após verificação minuciosa, você descobriu que essa maneira 
só funciona em cerca de 80% dos casos, e você precisa de mais do que isso para garantir a qualidade do 
seu trabalho. Após pesquisar mais, você descobriu que dos 11 dígitos do CPF, os dois últimos são 
verificadores e dependem dos 9 dígitos anteriores. Vamos introduzir alguma notação. 
Considere um CPF com os seguintes dígitos
    Obs.: an ou bn são dígitos
    a1a2a3.a4a5a6.a7a8a9-b1b2

Para descobrirmos o dígito b1, procedemos da seguinte maneira: multiplicamos o primeiro por 1,
o segundo por 2, o terceiro por 3, o quarto por 4 e vamos assim até multiplicarmos o nono por 9.
Então, somamos tudo isto. Após termos somado tudo, dividimos por 11. O dígito b1 será o resto da
divisão (ou 0, caso o resto seja 10).

Para o segundo dígito verificador, temos o seguinte: multiplicamos o primeiro por 9, o segundo por 8,
o terceiro por 7, o quarto por 6 e vamos assim até multiplicarmos o nono por 1. Então, somamos tudo isto e
dividimos por 11. O dígito b2 será o resto da divisão (ou 0, caso o resto seja 10).

Sabendo que isso vale para 100% dos CPFs, sua missão é implementar um programa que, dado um CPF, 
diga se ele é válido ou não.

--- Entrada ---

A entrada contém um número desconhecido de CPFs, que não excede 10000 casos. Em cada linha, um CPF na forma
    d1d2d3.d4d5d6.d7d8d9-d10d11

--- Saída ---

Se o CPF informado for válido, escreva "CPF valido". Caso contrário, escreva "CPF invalido".

Exemplo de Entrada
048.856.829-63
733.184.680-96
227.518.471-08
092.844.842-86
098.447.895-55

Exemplo de Saída
CPF invalido
CPF valido
CPF invalido
CPF valido
CPF invalido

*/

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