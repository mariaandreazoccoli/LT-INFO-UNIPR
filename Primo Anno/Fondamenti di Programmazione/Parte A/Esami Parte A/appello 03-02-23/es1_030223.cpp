/*Scrivere una funzione ruota che, presi in input un array di interi a e la sua lunghezza, sposti indietro
di una posizione tutti i valori dell’array. Il primo valore dell’array dovr`a essere spostato nell’ultima posizione.
La funzione main riportata di seguito
int main () {
int x [4] = {2 , 3 , 4 , 5}
ruota (x , 4);
print (x , 4);
return 0;
}
dovr`a quindi stampare 3 4 5 2 (dove la funzione print utilizzata nella funzione main stampa gli elementi di un 
array di interi). */

#include <iostream>
using namespace std;

void ruota (int* arr, int dim){
    int tmp[dim];

    tmp[0] = arr[dim-1];
    for (int i = 1; i < dim - 1; i++){
        tmp[i] = arr[i + 1];
    }
    for (int i = 0; i < dim; i++){
        arr[i] = tmp[i];
    }
}



/*int* ruota(int* arr, int dim){
    int tmp[dim];
    for (int i = 0; i < dim; i++){
        tmp[i] = arr[dim - 1 - i];
        arr[i] = tmp[i];
    }
    return arr;
}*/