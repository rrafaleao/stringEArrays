#include <iostream>

int main (){
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    printf("Tamanho do array: %d\n", tamanho);
    return false;
}