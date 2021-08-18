# Cadastro de Disciplina

Fazer um programa para ler os dados de uma disciplina e mostra-los novamente

Os dados da disciplina são: codigo: inteiro, Nome:string, Professor: string, Creditos: inteiro, Ano: Inteiro, Semestre: inteiro, Nota1: double e Nota 2: double. 
A média é calculada usando a nota1 e a nota2, nota 1 com peso 1 e nota 2 com peso 2.  
Calculo da media = (nota1 + 2.0 \* nota2)/3.0

**Obs: pode usar struck para representar a disciplina**   

Exemplo de Struct C#

~~~C#
class xyz{  
  public struct Pessoa{
   public string nome;  
   public double peso,altura;  
   public int idade;  
 }  

 public static void Main(){  
 {  
  .....  
 }  
}  
~~~

## Entrada
A entrada de dados contem os valores que o usuário digitaria, na seguinte ordem:
1. Codigo (inteiro)
2. Nome (String)
3. Nome do Professor (String)
4. Creditos (inteiro)
5. Ano (inteiro)
6. Semestre (inteiro)
7. Nota 1 (real - double)
8. Nota 2(real - double)

## Saída
 A saída deve ser mostrado o nome do campo, seguindo de espacos (para completar 10 casas), dois pontos, espaço e o valor. Tanto a nota1, nota2 e media devem ser escritos com 2 casas decimais. O codigo deve ter 4 digitos e com zeros a esquerda. Os dois pontos devem estar alinhados conforme mostrado abaixo. 
 
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
