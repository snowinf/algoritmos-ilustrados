#include <stdio.h>


int lenghtArr(int array[]);
int binarySearch(int item, int array[]);


int main(){

    int myList[] = {10,20,30,40,50,60,70,80,90,100,'\0'};
    int item = 0;
    printf("Item: ");
    scanf("%d", &item);
    printf("%d", binarySearch(item, myList));
}

int binarySearch(int item, int array[]){
    int lenght = lenghtArr(array);
    int alto = lenght - 1;
    int baixo = 0;
    while(baixo <= alto){
        int meio = (alto + baixo) / 2;
        int chute = array[meio];
        if(chute  == item){
            return array[meio];
        }
        else if(chute > item){
            alto = meio - 1;
        }
        else if(chute < item){
            baixo = meio + 1;
        }
        else{
            printf("Not Found")
            return 1;
        }
    }
}


int lenghtArr(int array[]){
    int lenght = 0;
    for(int i=0;array[i]!='\0';i++){
        lenght++;
    }
    return lenght;

}

