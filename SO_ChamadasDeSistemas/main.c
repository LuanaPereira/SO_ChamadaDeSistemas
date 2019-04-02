#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, vetor[11], num;
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");
    while(num!=EOF){
        num = getc(arquivo);
        if (num!=32){
            vetor[i]=num-48;
            i++;
        }
    }
    for (i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }
    fclose(arquivo);
    return 0;
}
