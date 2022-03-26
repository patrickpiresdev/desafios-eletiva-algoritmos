# Troca de Mensagens

João e Enzo adoram criptografar as suas mensagens. Para essa criptografia, eles utilizam a técnica da cifra de Vigenère. Essa técnica é bastante semelhante a cifra de Cesar, porém utiliza de diversas "chaves" para cada letra da frase a ser criptografada. A tabela abaixo demonstra o padrão da cifra, consistindo na repetição do alfabeto $26$ vezes, onde em cada linha uma letra é deslocada para a esquerda em relação a linha anterior. Essas 26 linhas correspondem às $26$ possíveis cifras de César.

![](.\troca-de-mensagens.png)

Uma palavra aleatória é escolhida como palavra-chave, e cada letra desta palavra vai indicar a linha a ser utilizada para cifrar ou decifrar uma letra da mensagem. Por exemplo:

O texto a ser criptografado é "ciencia da computacao";
Definimos como palavra-chave "obi";
Agora, devemos repetir a palavra-chave tantas vezes forem necessárias até obtermos o comprimento do texto a ser criptografado:

ciencia da computacao

obiobio bi obiobiobio

Para realizar a criptografia da primeira letra, devemos encontrar a linha da letra "o" na tabela, e procurar pela coluna da primeira letra da palavra, "c". Para a segunda letra, devemos procurar pela linha "b" coluna "i", e assim por diante, até termos como resultado:

qjmbdqo ei qpudvbodic

Uma vez que realizar a cifragem de todas as palavras das mensagens a serem enviadas é um trabalho bastante custoso, os amigos decidiram que somente irão criptografar as palavras que iniciarem com uma letra consoante. Sendo assim, eles somente aplicarão a palavra-chave nas palavras que eles irão de fato criptografar.

Dada uma palavra-chave e um texto de uma mensagem, sua tarefa é criptografar esta mensagem utilizando a cifra de Vigenère mas não esquecendo da regra adicionada por João e Enzo.

## Entrada

A primeira linha contém uma palavra-chave $K \ | \ 3 \leq K \leq 45$, que representa a chave para a criptografia. Ela somente é formada pelo alfabeto (a-z) em letras minúsculas, sem espaços. A linha a seguir contém um inteiro $N \ | \ 1 \leq N \leq 150$ que indica a quantidade de mensagens a serem criptografadas. As próximas $N$ linhas correspondem as mensagens. Estas mensagens não ultrapassam $105$ caracteres e são compostas pelo alfabeto (a-z) em letras minúsculas e por espaços.

## Saída

A saída deve apresentar a mensagem criptografada, de acordo com a regra dos amigos.

| Exemplos de Entrada                 | Exemplos de Saída                   |
| ----------------------------------- | ----------------------------------- |
| obi                                 |                                     |
| 2                                   |                                     |
| olimpiada brasileira de informatica | olimpiada psigjtsjzo em informatica |
| ciencia da computacao               | qjmbdqo ei qpudvbodic               |

| Exemplos de Entrada                 | Exemplos de Saída                   |
| ----------------------------------- | ----------------------------------- |
| informatica                         |                                     |
| 2                                   |                                     |
| ciencia da computacao               | kvjbtua wi eouczhroah               |
| olimpiada brasileira de informatica | olimpiada jefgzxebzc dm informatica |