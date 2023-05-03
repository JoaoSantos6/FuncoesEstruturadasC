#include <stdio.h>

void imprimir(int *v, int n){
    int i;
    for(i = 0; i<n;i++){
        printf("%d",v[i]);    
        if(i != n-1){
            printf(" ");
        }
    }
    printf("\n");
}

void insertion_sort(int *v, int n){
    int i,k;
    int numeroComparacoes = 0;
    for(i = 1; i<n; i++){
        int item_atual = v[i];
        int indice_para_inserir = i;
        int entrou = 0;
        for(k = i-1; k>=0 && item_atual < v[k]; k--){
            v[k+1] = v[k];
            indice_para_inserir--;
            numeroComparacoes++;
            entrou = 1;
        }
        v[indice_para_inserir] = item_atual;
        imprimir(v, n);
        if(!entrou) numeroComparacoes++;
        
    }
    imprimir(v, n);
    printf("%d\n",numeroComparacoes);
}

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];
    
    for(int i; i < n; i++){
       scanf("%d", &vetor[i]); 
    }
    
    imprimir(vetor, n);

    insertion_sort(vetor, n);

    return 0;

}