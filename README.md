# Desafio: nível novato
**Posicionando Navios no Tabuleiro**

Neste primeiro desafio, você dará o primeiro passo na construção do seu jogo de Batalha Naval. 
Você utilizará seus conhecimentos de vetores (arrays unidimensionais) em C para representar um tabuleiro simplificado e posicionar dois navios nele: 
um na vertical e outro na horizontal. Continue o desenvolvimento no mesmo programa iniciado anteriormente.

**O que você vai fazer**

- Represente o Tabuleiro: Utilize uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. 
Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.
 
- Posicione os Navios: Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. 
Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). 
Um navio será posicionado horizontalmente e o outro verticalmente. Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. 
Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham. 

*Dica*: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, 
de acordo com a orientação (horizontal ou vertical) do navio.
 
- Exiba o Tabuleiro: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios. A saída deve ser clara e organizada, permitindo visualizar facilmente a posição dos navios. 
Dica: Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.

**Requisitos funcionais**
- O programa deve receber as coordenadas iniciais (linha e coluna) de cada navio como entrada (pode ser definido diretamente no código). 
- O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
- O programa deve garantir que os navios não se sobreponham.
- O programa deve exibir o tabuleiro no console com os navios posicionados corretamente.

**Requisitos não funcionais**
- Performance: O programa deve executar de forma eficiente, sem causar atrasos perceptíveis. 
- Documentação: O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar a função de cada variável, loop e bloco de código. 
- Legibilidade: O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.


**Simplificações para o nível básico**
- O tamanho do tabuleiro e dos navios é fixo (10x10).
- Os navios têm tamanho fixo igual a 3.
- As coordenadas dos navios são definidas diretamente no código, sem input do usuário.
- Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
- A validação de sobreposição de navios pode ser simplificada.

_________________________________
# Desafio: nível aventureiro
**Tabuleiro Completo e Navios Diagonais**

Nesta etapa, você irá aprimorar o seu jogo de Batalha Naval adicionando a complexidade de navios posicionados na diagonal. Dê continuidade ao código que você desenvolveu no Desafio do Nível Novato.

**O que você vai fazer**

Você deve modificar o seu programa em C para:

- **Criar um Tabuleiro 10x10:** Declare uma matriz (array bidimensional) de tamanho 10x10 para representar o tabuleiro do Batalha Naval. Inicialize todas as posições com o valor 0, representando água.
 
- **Posicionar Quatro Navios:** Posicione quatro navios no tabuleiro.
 
- Dois navios devem estar posicionados horizontalmente ou verticalmente (como no nível anterior).
 
- Os outros dois navios devem ser posicionados na diagonal. Considere que um navio diagonal ocupa posições onde a linha e a coluna aumentam ou diminuem simultaneamente (ex: tabuleiro[i][i] ou tabuleiro[i][9-i] para um tabuleiro 10x10).
 
- Represente as posições ocupadas pelos navios com o valor 3.
 
- Escolha as coordenadas iniciais.
 
- Valide que as posições dos navios estejam dentro dos limites do tabuleiro e que eles não se sobreponham.
 
- **Exibir o Tabuleiro:** Utilize loops aninhados e o comando printf para exibir o tabuleiro completo no console. A saída deve mostrar a matriz 10x10, com 0s representando água e 3s representando as partes dos navios. Utilize espaços para alinhar a saída e facilitar a visualização do tabuleiro.

**Requisitos funcionais**
- O programa deve utilizar uma matriz 10x10 para representar o tabuleiro.
- O programa deve permitir o posicionamento de quatro navios, sendo dois na diagonal.
- O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
- O programa deve garantir que os navios não se sobreponham.
- O programa deve exibir o tabuleiro completo no console com os navios posicionados corretamente.

**Requisitos não funcionais**
- *Performance:* O programa deve executar de forma eficiente, sem causar atrasos perceptíveis. 
- *Documentação:* O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar a função de cada variável, loop e bloco de código.
- *Legibilidade:* O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.

**Simplificações para o nível intermediário**
- As coordenadas e tamanhos dos navios são definidos diretamente no código, sem entrada do usuário.
- Os navios têm tamanho fixo igual a 3. 
- A validação de sobreposição de navios pode ser simplificada, mas deve cobrir os casos diagonais. 
- Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
_________________________________________________________
# Desafio: nível mestre
**Habilidades especiais e áreas de efeito**

Neste desafio final, você adicionará um toque estratégico ao seu jogo de Batalha Naval, implementando habilidades especiais com áreas de efeito distintas. Você continuará trabalhando no mesmo projeto iniciado nos níveis anteriores, adicionando a lógica para representar e exibir essas habilidades no tabuleiro.

**O que você vai fazer**

Você deve modificar o seu programa em C para:
- Definir o Tabuleiro: Mantenha o tabuleiro 10x10 que você criou no nível anterior. Ele servirá como base para visualizar as áreas de efeito das habilidades.
- Criar Matrizes de Habilidade: Crie três matrizes separadas, cada uma representando a área de efeito de uma habilidade especial:
 
- Cone: Uma matriz que represente uma área em forma de cone, com o ponto de origem no topo e expandindo-se em direção à base. Imagine um cone apontando para baixo. A matriz deve representar essa forma, com o ponto de origem (o topo do cone) na parte superior e a área se expandindo para baixo.
- Cruz: Uma matriz que represente uma área em forma de cruz, com o ponto de origem no centro.
- Octaedro: Uma matriz que represente a vista frontal de um octaedro (imagine como se estivesse olhando diretamente para ele), resultando em um formato que se assemelha a um losango, com o ponto de origem no centro.
 
As matrizes de habilidade devem indicar quais posições são afetadas pela habilidade com o valor 1, e quais não são afetadas com o valor 0. Defina um tamanho razoável para as matrizes de habilidade (por exemplo, 5x5 ou 7x7).
 
**Integrar Habilidades ao Tabuleiro:**
 
Defina um ponto de origem para cada habilidade no tabuleiro (coordenadas linha e coluna). Este ponto de origem será o centro da habilidade, a partir do qual a área de efeito será calculada.
 
Crie a lógica para sobrepor a matriz de habilidade ao tabuleiro, centrando a matriz de habilidade no ponto de origem definido.
 
As posições do tabuleiro que estiverem dentro da área de efeito da habilidade (valor 1 na matriz de habilidade) devem ser marcadas visualmente. Utilize um valor diferente de 0 e 3 para representar as posições afetadas pela habilidade (por exemplo, o valor 5).
 
- Exibir o Tabuleiro com Habilidade: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console, mostrando as áreas afetadas pelas habilidades. Utilize caracteres diferentes para representar:
 
Água (0)
 
Navio (3)
 
Área afetada pela habilidade (5)
 
- Utilizar Condicionais: As matrizes de habilidades devem ser construídas de forma dinâmica, utilizando condicionais dentro de loops aninhados. A sobreposição das habilidades no tabuleiro também deve utilizar condicionais para garantir que a área de efeito permaneça dentro dos limites do tabuleiro.
 

Exemplo de saída de habilidade em cone:

0 0 3 0 0

0 3 3 3 0 

3 3 3 3 3

Exemplo de saída de habilidade em cruz:

0 0 3 0 0 

3 3 3 3 3 

0 0 3 0 0

Exemplo de saída de habilidade em octaedro:

0 0 3 0 0 

0 3 3 3 0 

0 0 3 0 0 


**Requisitos funcionais**
- O programa deve criar as matrizes de efeito para as habilidades Cone, Cruz e Octaedro.
- As matrizes de habilidade devem utilizar os valores 0 e 1 para indicar as áreas não afetadas e afetadas, respectivamente.
- O programa deve permitir definir um ponto de origem para cada habilidade no tabuleiro.
- O programa deve sobrepor as matrizes de habilidade ao tabuleiro, marcando as áreas afetadas.
- A saída do programa deve exibir o tabuleiro com os navios e as áreas de efeito das habilidades, utilizando diferentes caracteres para cada elemento.
- A construção das matrizes de habilidade e a sobreposição no tabuleiro devem obrigatoriamente utilizar estruturas de repetição aninhadas e condicionais.

**Requisitos não funcionais**
- Performance: O programa deve executar de forma eficiente, sem causar atrasos perceptíveis.
- Documentação: O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar como as áreas de efeito das habilidades são calculadas.
- Legibilidade: O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.
  
**Simplificações para o nível avançado**
- A posição das habilidades no tabuleiro é definida diretamente no código, sem input do usuário.
- Não é necessário implementar a lógica de dano ou efeito das habilidades nos navios (apenas a visualização da área de efeito).
- O tamanho das matrizes de habilidade pode ser fixo.
- A validação de limites do tabuleiro durante a sobreposição da habilidade pode ser simplificada.
