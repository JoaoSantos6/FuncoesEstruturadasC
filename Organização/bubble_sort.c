// Online C compiler to run C program online
#include <stdio.h>

void imprimir(int *v, int n){
    int i;
    for(i = 0; i<n;i++){printf("%d ",v[i]);    }
    printf("\n");
}

void bubble_sort(int *v, int n){
    int i, k;
    for(i = 0; i<n-1; i++){
        int trocou = 0;
        for(k = 0; k < n-1-i; k++)
            if(v[k] > v[k+1]){
                int tmp = v[k];
                v[k] = v[k+1];
                v[k+1] = tmp;
                trocou = 1;
            }
        if(!trocou) break;
    }      
}

void selection_sort(int *v, int n){
    int i;
    for(i = 0; i<n-1; i++){
        int indice_menor = i;
        int k;
        for(k = i+1; k<n; k++)
            if(v[k] < v[indice_menor])
                indice_menor = k;
        int tmp = v[i];
        v[i] = v[indice_menor];
        v[indice_menor] = tmp;
    
    }
    
}

int main() {
    int n = 6;
    int vetor[] = {6, 9, 40, 3, 5, 16};
    
    imprimir(vetor, n);
    
    //selection_sort(vetor, n);
    bubble_sort(vetor, n);
    
    imprimir(vetor, n);

    return 0;
}