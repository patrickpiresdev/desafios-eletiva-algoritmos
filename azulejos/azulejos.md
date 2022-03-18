# Azulejos

Rafael resolveu trocar os azulejos de sua sala de estar, e para isto fez as medições e comprou $N$ azulejos brancos na loja.

O fato de todos os azulejos serem brancos deixou Rafael um pouco preocupado com o design de sua sala de estar, e então decidiu pintar alguns deles para dar um "ar mais moderno" à sua casa.

Posicionou todos os $N$ azulejos em uma linha reta, e enumerou todos eles de $1$ até $N$, da esquerda para a direita.

Para escolher quais azulejos pintar, pensou na seguinte lógica: Escolheu dois inteiros $A$ e $B$, e disse que iria pintar todos os azulejos cuja enumeração fosse múltipla de $A$ e/ou $B$.

Ajude Rafael a descobrir quantos azulejos serão pintados no total.

## Entrada

Haverá diversos casos de teste. Cada caso de teste contém três inteiros, $N$, $A$ e $B$ $(3 ≤ N ≤ 10^9, 2 \leq A, B \leq N)$.

O último caso de teste é indicado quando $N = A = B = 0$, o qual não deverá ser processado.

## Saída

Para cada caso de teste, imprima uma linha contendo um inteiro, mostrando quantos azulejos serão pintados no final do processo.

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
|10 2 3              | 7                |
|50 5 7              | 16               |
|1000000 28 32       | 62500            |
|0 0 0               |                  |