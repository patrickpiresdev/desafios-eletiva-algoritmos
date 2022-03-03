# Jogo de Boca

Um jogo infantil, muito popular, é o $21 \text{ de boca}$. O jogo é jogado da seguinte forma: o primeiro jogador diz um número, $n_0$ , que pode ser $1$ ou $2$. O segundo jogador pode então dizer um número $n_1$ tal que $n_1 \in { n_0 + 1 , n_0 + 2 }$. E assim por diante, os jogadores se alternam, dizendo sempre um número que é um ou dois maior do que o anterior. O jogador que disser $21$ ganha o jogo. Por exemplo, a sequência de números poderia ser: $1, 3, 5, 6, 7, 9, 11, 12, 14, 15, 16, 18, 19, 21$. Neste jogo, o primeiro jogador sempre perde, se o segundo souber jogar bem.

A cada nova geração as crianças ficam mais espertas. Atualmente, apesar de acharem o $21 \text{ de boca}$ um jogo interessante, muitas crianças não se sentem desafiadas o bastante e por isso resolveram generalizar o jogo, criando assim o $N \text{ de boca}$. Dado um inteiro $N$ , no lugar do $21$, o primeiro jogador pode escolher $1$ ou $2$. A partir daí os jogadores se alternam, adicionando $1$ ou $2$ ao número anterior, até que um deles diga o número $N$ e ganhe o jogo. Sabendo que ambos os jogadores são excelentes e sabem jogar muito bem, seu problema é determinar qual o inteiro inicial que o primeiro jogador deve escolher para ganhar o jogo.

## Entrada
A entrada consiste de uma única linha que contém $N \ | \ N \in \mathbb{Z} \text{ e } 3 \geq N \geq 10^{100} $ escolhido para a partida atual do $N$ de boca.

## Saída
Seu programa deve produzir uma única linha com um inteiro representando o número, em ${ 1, 2 }$ , que o primeiro jogador deve escolher, para ganhar o jogo. Se não for possível, então o inteiro deve ser zero.

| Exemplos de Entrada              | Exemplos de Saída |
| -------------------              | ----------------- |
| 7                                | 1                 |
| 9                                | 0                 |
| 12341234123412341234123412341234 | 2                 |