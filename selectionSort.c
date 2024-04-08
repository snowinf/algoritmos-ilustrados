#include <stdio.h>

//Declarando funções
int tamanho(int arr[]);
int buscaMenor(int arr[]);
int selectionSort(int arr[]);

//Função principal
int main(){
    int myArr[] = {64,25,12,22,11}; //Cria uma array de 5 elementos desordenado
    printf("%d", selectionSort(myArr)); //Printa o novo array ordenado, chamando a função selectionSort
}


int selectionSort(int arr[]){ // Declara a função selection sort, com o argumento do array inicial
    int newArr[5]; // Cria um novo array
    for(int i=0;i < tamanho(arr); i++){ // Faz um loop utilizando o tamanho total do array
        int menor = buscaMenor(arr); //Adiciona o menor valor dentro da variavel menor, utilizando a função buscaMenor
        newArr[] = arr[menor]
        arr[menor] = 
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
