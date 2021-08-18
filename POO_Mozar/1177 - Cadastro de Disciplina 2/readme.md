# Cadastro de Disciplina 2

Fazer um programa para ler os dados de uma disciplina e mostra-los novamente. 

O programa deve mostrar um menu de opções com 3 opcoes: ler dados da disciplina, mostrar os dados da disciplina e sair. Os dados da disciplina são: codigo: inteiro, Nome:string, Professor: string, Creditos: inteiro, Ano: Inteiro, Semestre: inteiro, Nota1: double e Nota 2: double.   
A média é calculada usando a nota1 e a nota2, nota 1 com peso 1 e nota 2 com peso 2  

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

## Entrada

A entrada de dados contem os valores que o usuário digitaria, desta forma para inserir eles digita 1 e depois os dados da disciplina na seguinte ordem: Codigo, Nome, Nome do Professor, Creditos, Ano, Semestre,Nota1 e Nota2. Para listar ele digitaria 2, as disciplinas seriam apresentadas, o usuario deve digitar "Ok" para voltar ao menu. Finalmente para sair ele apertaria 3 e o programa se encerra escrevendo na tela "obrigado por utilizar o programa.". 

## Saída

Primeiro mostra-se o menu, e depois depende da opção que o usuário escolher

### Menu

Mostra o menu de opções: "1 - ler dados da disciplina", "2 - mostrar os dados da disciplina" e "3 - sair".  
**OBS: Caso seja digitado um numero inválido, menor que 1 ou maior que 3, o menu deverá ser apresentado novamente.**  

1 - ler dados da disciplina  
2 - mostrar os dados da disciplina  
3 - sair  
Entre com a sua opcao:  

### Ler Dados da Disciplina

Nesta o usuário deve digitar os dados da disciplina na ordem, nada é escrito na tela, os dados da disciplina lida são mostrados e o usuário deve digitar "Ok" para seguir

### Mostrar os dados da disciplina

Nesta opção o programa deverá mostrar os dados da disciplina no seguinte formato nome do campo, seguindo de espacos (para completar 10 casas), dois pontos, espaço e o valor. Tanto a nota1, nota2 e media devem ser escritos com 2 casas decimais.o codigo deve ter 4 digitos e com zeros a esquerda. Os dois pontos devem estar alinhados conforme mostrado abaixo.
~~~
Codigo    : 0001
Nome      : Eu mesmo
Professor : Professor Xavier
Creditos  : 2
Ano       : 2000
Semestre  : 1
Nota1     : 7.50
Nota2     : 6.12
Media     : 6.58
~~~

### Sair

Nesta opção o programa deve escrever a mensagem "Obrigado por utilizar o programa de cadastro, volte sempre!" e encerra a aplicação
