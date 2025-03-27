# Consultar Nota - UCB
Este <b> programa em C 
calcula a nota final (NF) de um estudante com base em suas avaliações e determina se ele foi aprovado, está em recuperação ou foi reprovado.


O intuito deste projeto é facilitar os alunos a calcularem suas notas.

## Como funciona este projeto
- O usuário insere as notas das provas N1, N2 e PPD.
- Se a soma de N1 e N2 for maior ou igual a 7, o estudante é aprovado.
- Se a soma for menor que 7, o estudante faz a prova N3, ou seja, recuperação.
- A nota final é recalculada e o estudante pode ser aprovado ou reprovado.

## Como executar
- Compile o código: 
**gcc -o calculadora_notas calculadora_notas.c**
- Execute o programa: 
**./calculadora_notas**
