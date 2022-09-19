/*THIS CODE ISN'T ACCEPTED BY Beecrowd*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/shm.h>

int main() {
    int *soma, shmid, x, a, b;

    shmid = shmget(IPC_PRIVATE, 100, 0600);
    soma = shmat(shmid, 0, 0);
    x = fork();
    
    if(x==0){
        scanf("%d %d", &a, &b);
        *soma = a+b;
    }
    
    if(x!=0){
        wait(NULL);
        printf("X = %d\n", *soma);
    }
        
    shmctl(shmid, IPC_RMID, 0);
    
    return 0;
}
