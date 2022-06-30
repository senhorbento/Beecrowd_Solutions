using System; 

class URI {
    static void Main(string[] args) { 
        int total = Int32.Parse(Console.ReadLine());
        int tempo = 3600;
        int resto = total;
        int[] vet = new int[3];
        for(int i = 0; i < 3 ; i++){
            vet[i] = resto/tempo;
            resto = resto%tempo;
            tempo = tempo / 60;
        }
        Console.WriteLine(vet[0]+":"+vet[1]+":"+vet[2]);
    }

}