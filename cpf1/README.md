# CPF 1

Você foi contratado pelas Indústrias Udilandenses (INUDIL) para desenvolver uma maneira de 
verificar se o Cadastro de Pessoa Física (CPF) indicado por um cliente era válido ou não. 
Conversando com amigos, você chegou à conclusão de que um CPF seria válido se a soma 
de todos os seus dígitos resultasse em um número múltiplo de 11. Após verificação minuciosa, 
você descobriu que essa maneira só funciona em cerca de 80% dos casos, e você precisa de 
mais do que isso para garantir a qualidade do seu trabalho. 
Após pesquisar mais, você descobriu que dos 11 dígitos do CPF, os dois últimos são verificadores 
e dependem dos 9 dígitos anteriores. Vamos introduzir alguma notação.

Considere um CPF com os seguintes dígitos

$$a_1a_2a_3 \ . \ a_4a_5a_6 \ . \ a_7a_8a_9 \ \text{-} \ b_1b_2$$

Para descobrirmos o dígito b1, procedemos da seguinte maneira: multiplicamos o primeiro por 1,
o segundo por 2, o terceiro por 3, o quarto por 4 e vamos assim até multiplicarmos o nono por 9.
Então, somamos tudo isto. Após termos somado tudo, dividimos por 11. O dígito b1 será o resto da
divisão (ou 0, caso o resto seja 10).

Para o segundo dígito verificador, temos o seguinte: multiplicamos o primeiro por 9, o segundo por 8,
o terceiro por 7, o quarto por 6 e vamos assim até multiplicarmos o nono por 1. 
Então, somamos tudo isto e dividimos por 11. 
O dígito b2 será o resto da divisão (ou 0, caso o resto seja 10).

Sabendo que isso vale para 100% dos CPFs, sua missão é implementar um programa que, dado um CPF,
diga se ele é válido ou não.

---

## Entrada

A entrada contém um número desconhecido de CPFs, que não excede 10000 casos. Em cada linha, um CPF na forma: $d_1d_2d_3 \ . \ d_4d_5d_6 \ . \ d_7d_8d_9 \ \text{-} \ d_{10}d_{11}$

## Saída

Se o CPF informado for válido, escreva **CPF valido**. Caso contrário, escreva **CPF invalido**.

---
## Exemplos
    Entrada            Saída
    048.856.829-63     CPF invalido
    733.184.680-96     CPF valido
    227.518.471-08     CPF invalido
    092.844.842-86     CPF valido
    098.447.895-55     CPF invalido