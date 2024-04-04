#include <stdio.h>

int tamanho(int arr[]);
int buscaMenor(int arr[]);
int selectionSort(int arr[]);


int main(){
    int myArr[] = {64,25,12,22,11};
    printf("%d", selectionSort(myArr));
    return 0;
}


int selectionSort(int arr[]){
    int newArr[5];
    for(int i=0;i <= tamanho(arr); i++){
        int menor = buscaMenor(arr);
        newArr[i] = arr[menor];
    }
    return newArr[];
}


int buscaMenor(int arr[]){

    int menor = arr[0];
    int menorIndice = 0;
    for(int i=0;i <= tamanho(arr);i++){
        if(arr[i] < menor){
            menor = arr[i];
            menorIndice = i;
        }
    }
    return menorIndice;

}

int tamanho(int arr[]){
    int tamanho;
    for(int i=0;arr[i]!='\0';i++){
        tamanho++;
    }
    return tamanho;

}
