//FATTO

/*Scrivere una funzione reverse con tipo di ritorno void che, presi come parametri un array di interi
a e la sua dimensione length, inverta l’ordine degli elementi dell’array a. Per esempio se l’array a `e 
[1, 5, 3, 2, 8], dopo la chiamata a funzione reverse, l’array sar`a [8, 2, 3, 5, 1].*/

#include <iostream>
using namespace std;

void reverse(int arr[], int lenght){
    int tmp[lenght];
    for (int i = 0; i < lenght; i++) {
        tmp[i] = arr[lenght - 1 - i];
    }
    for (int i = 0; i < lenght; i++){
        arr[i] = tmp[i];
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int lenght = 6;

    reverse(arr, lenght);

    for (int i = 0; i < lenght; i++){
        cout << arr[i] << " ";
    }
    return 0;
}