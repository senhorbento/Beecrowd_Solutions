# Cadastro Disciplina 4

Fazer um programa para gerenciar  o seu  historico de disciplinas. O programa deve mostrar um menu de opções com 8 opcoes: incluir uma disciplina, remover uma disciplina dado o codigo,alterar os dados de uma disciplina dado o codigo, listar as disciplinas cursadas, listar as disciplinas de um semestre e ano, listar as disciplinas dado parte do nome ou nome professor, mostrar historico e sair.  Ao Iniciar o programa o historico deve iniciar vazio. Os dados da disciplina são: codigo: inteiro, Nome:string, Professor: string, Creditos: inteiro, Ano: Inteiro, Semestre: inteiro, Nota1: double e Nota 2: double.a média é calculada usando a nota1 e a nota2, nota 1 com peso 1 e nota 2 com peso 2  

*Calculo da media = (nota1 + 2.0 \* nota2)/3.0*

**Obs: pode usar struck para representar a disciplina**   

Exemplo de Struct C#
~~~C#
class xyz{
  public struct Pessoa{
    public string nome;
    public double peso,altura;
    public int idade;
  }

  public static void Main()
  {
       .....
  }
}
~~~

# Entrada

A entrada de dados contem os valores que o usuário digitaria, desta forma para inserir eles digita 1 e depois os dados da disciplina na seguinte ordem: Codigo, Nome, Nome do Professor, Creditos, Ano, Semestre,Nota1 e Nota2. Para listar ele digitaria 4, as disciplinas seriam apresentadas e depois digita "Ok" para voltar ao menu. Para remover uma disciplina o usuario digita 2 (opção de remover) entao digita o codigo da disciplina a ser removida, para alterar os dados de uma disciplina ele digita 3, depois o codigo da disciplina e em seguida todos os novos dados da disciplina, na ordem (codigo, nome, nome professor, creditos, ano, semestre, nota1 e nota2). Finalmente para sair ele apertaria 8 e o programa se encerra escrevendo na tela "obrigado por utilizar o programa.". A qualquer momento ele pode digitar 4,5,6 ou 7, para listar as disciplinas, após listar o usuario deve digitar "Ok" para retornar ao menu. A Opção 7 "Historico", vai listar as disciplinas, e no final deve mostrar o CR - Coeficiente de Rendimento do aluno. Que é a media ponderada de todas as disciplinas cursadas, onde o peso de cada disciplina é a quantidade de creditos da mesma.


# Saída

## Menu

Mostrar o menu de opções: "1 - inserir nova disciplina", "2 - remover disciplina pelo codigo", "3 - alterar disciplina pelo codigo", "4 - listar todas as disciplinas","5 - listar disciplinas de um ano/semestre", "6 - listar disciplinas pelo nome/professor", "7 - Historico"  e "8 - sair".  
**OBS: Caso seja digitado um numero inválido, menor que 1 ou maior que 8, o menu deverá ser apresentado novamente.**
~~~
1 - inserir nova disciplina
2 - remover disciplina pelo codigo
3 - alterar disciplina pelo codigo
4 - listar todas as disciplinas
5 - listar disciplinas de um ano/semestre
6 - listar disciplinas pelo nome/professor
7 - Historico
8 - sair
~~~
## Inserir nova disciplina

nesta opção o usuário deve digitar os dados da disciplina na ordem, nada é escrito na tela, após a digitação o programa deve inserir a disciplina no historico e apresentar a mensagem "Disciplina inserida com sucesso!"

## Remover disciplina pelo codigo

Nesta o opção o usuario irá digitar o codigo, e o programa deverá remover a disciplina, sem alterar a ordem das disciplinas existentes, e em seguida deve mostrar a informação "Disciplina removida com sucesso!". Caso a disciplina nao exista o programa deve apresentar a mensagem "Disciplina nao encontrada!"

## Alterar disciplina pelo codigo

Nesta o opção o usuario irá digitar o codigo, e o programa deverá pesquisa a disciplina, caso ela nao seja encontrada a mensagem "Disciplina nao encontrada!" deverá ser apresentada. Caso a disciplina exista o programa deve solicitar os novos dados da disciplina na ordem (codigo, nome, nome professor, creditos, ano, semestre, nota1 e nota2) e ao final mostrar a mensagem "Disciplina alterada com sucesso!"

## Listar todas as disciplinas

Nesta opção o programa deverá listar todas as disciplinas do histórico  no seguinte formato: codigo com 4 digitos e preenchido com zero a esquerda, nome com 50 caracteres e alinhado a esquerda, Creditos com 4 caractres e alinhado a direita, Ano/Semestre, ano com 4 digitos e semestre com 1 digito, media com 5 caracteres e 2 de precisão.  Não esquecer de colocar o cabeçalho.Após a listagem, o programa deve ficar esperando o usuario digitar "Ok" para voltar ao menu principal. Conforme mostrado abaixo:

~~~
Cod. Nome                                               Cred  Ano/S Media
9876 Calculo I                                             6 2020/1 07.03
0001 Ingles Tecnico                                        3 2020/1 06.67
1001 Programacao Orientada a Objetos                       3 2020/1 07.30
1010 Programacao em Java                                   3 2020/1 10.00
~~~

## Listar disciplinas de um ano/semestre

Nesta opção o programa deverá listar conforme o item "Listar todas as disciplinas", mas deve filtrar por ano e semestre. sendo assim após escolher esta opção o usuário irá entrar com dois inteiros, na sequencia, que são o ano e o semestre a serem aplicados no filtro.Após a listagem, o programa deve ficar esperando o usuário digitar "Ok" para voltar ao menu principal.conforme mostrado abaixo para ano 2020 e semestre 1

~~~
Cod. Nome                                               Cred  Ano/S Media
9876 Calculo I                                             6 2020/1 07.03
0001 Ingles Tecnico                                        3 2020/1 06.67
1001 Programacao Orientada a Objetos                       3 2020/1 07.30
1010 Programacao em Java                                   3 2020/1 10.00
~~~

## Listar disciplinas pelo nome/professor

Nesta opção o programa deverá listar conforme o item "Listar todas as disciplinas", mas deve filtrar por parte do nome da disciplina ou por parte do nome do professor. sendo assim após escolher esta opção o usuário irá entrar com uma string na sequencia, que essa string deve ser aplicada no filtro. Caso essa string exista no nome da disciplina ou do professor, então a discplina deve ser mostrada.Após a listagem, o programa deve ficar esperando o usuário digitar "Ok" para voltar ao menu principal.conforme mostrado abaixo para "Programa"

~~~
Cod. Nome                                               Cred  Ano/S Media
1001 Programacao Orientada a Objetos                       3 2020/1 07.30
1010 Programacao em Java                                   3 2020/1 10.00
~~~


## Historico

Nesta opção o programa deverá listar conforme o item "Listar todas as disciplinas", mas ao final deve apresentar o texto "Coeficiente de Rendimento" e na mesma linha o valor do C.R. com 2 casas decimais.Após a listagem, o programa deve ficar esperando o usuário digitar "Ok" para voltar ao menu principal.conforme mostrado abaixo

~~~
Cod. Nome                                               Cred  Ano/S Media
9876 Calculo I                                             6 2020/1 07.03
0001 Ingles Tecnico                                        3 2020/1 06.67
1001 Programacao Orientada a Objetos                       3 2020/1 07.30
1010 Programacao em Java                                   3 2020/1 10.00
Coeficiente de Rendimento                                           02.07
~~~

## Sair

Nesta opção o programa deve escrever a mensagem "Obrigado por utilizar o programa de cadastro, volte sempre!" e encerra a aplicação
