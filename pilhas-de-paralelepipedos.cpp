/*
                        ----- PILHAS DE PARALELEPIPEDOS -----

Uma jardineiro tem um monte de pedaços de granito em forma de paralelepípedo e
quer formar uma escultura empilhando dois desses blocos. Ele pode virar convenientemente 
os blocos, mas só pode empilhar os dois blocos se a face do bloco que vai ficar em baixo tiver 
ambas as dimensões maiores que as da face que será empilhada. Faça um programa para ajudá-lo nessa tarefa.

Entrada
A entrada consiste de uma série de testes. A primeira linha contém um único inteiro 
indicando o número n (1 ≤ n ≤ 20) de casos de testes. A seguir vêm n linhas contendo, 
cada uma, um caso de teste. Cada caso de teste se compõe de 6 inteiros: 
os três primeiros são as dimensões do primeiro bloco e, as três últimas, as dimensões do segundo bloco.

Saída
Para cada caso de teste imprima, em uma linha, um inteiro de 0 a 3, com o seguinte significado:
   - 0, se nenhum bloco pode ser empilhado sobre o outro.
   - 1, se apenas o primeiro bloco pode ser empilhado sobre o segundo.
   - 2, se apenas o segundo bloco pode ser empilhado sobre o primeiro.
   - 3, Se cada bloco pode ser convenientemente empilhado sobre o outro.

--- Exemplo de Entrada ---
3
10 10 10 10 20 10
12 20 14 30 10 10
8 20 14 20 10 10

--- Exemplo de Saída ---
0
2
3
*/

#include <iostream>
#include <algorithm>
using namespace std;

short int compare(short int* face1, short int* face2) {
    if (face1[0] < face2[0] && face1[1] < face2[1]) return 1;
    if (face1[1] < face2[0] && face1[0] < face2[1]) return 1;
    return 0;
}

int main() {
    short int n;
    short int sides1[3];
    short int sides2[3];

    scanf("%hd", &n);

    for (short int i=0; i<n; i++) {
        scanf("%hd %hd %hd", sides1, sides1+1, sides1+2);
        scanf("%hd %hd %hd", sides2, sides2+1, sides2+2);

        sort(sides1, sides1+3);
        sort(sides2, sides2+3);

        short int parallelepiped1_smaller_face[] = { sides1[0], sides1[1] };
        short int parallelepiped1_biggest_face[] = { sides1[1], sides1[2] };

        short int parallelepiped2_smaller_face[] = { sides2[0], sides2[1] };
        short int parallelepiped2_biggest_face[] = { sides2[1], sides2[2] };

        short int answer = 0;
        short int result = compare(parallelepiped1_smaller_face, parallelepiped2_biggest_face);
        if (result == 1) answer = 1;
        result = compare(parallelepiped2_smaller_face, parallelepiped1_biggest_face);
        if (result == 1) {
            if (answer == 1) {
                answer = 3;
            } else {
                answer = 2;
            }
        }

        printf("%d\n", answer);
    }
}