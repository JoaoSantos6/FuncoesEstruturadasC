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

void selection_sort(int *v, int n){
    int i;
    int trocou = 0;
    for(i = 0; i<n-1; i++){
        int indice_menor = i;
        int k;
        for(k = i+1; k<n; k++)
            if(v[k] < v[indice_menor])
                indice_menor = k;
        
        if(indice_menor != i){
            int tmp = v[i];
            v[i] = v[indice_menor];
            v[indice_menor] = tmp;
            trocou++;
        }
    
        imprimir(v, n);
    }
    imprimir(v, n);
    printf("%d\n",trocou);
}

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];
    
    for(int i; i < n; i++){
       scanf("%d", &vetor[i]); 
    }
    
    imprimir(vetor, n);

    selection_sort(vetor, n);

    return 0;

}