//FATTO, DA RIGUARDARE
/*Scrivere una funzione getZeroSubsequences che prenda come parametri un array di numeri interi e
la sua lunghezza e ritorna il numero di sottosequenze nell’array la cui somma `e pari a zero. 
Per esempio, se l’array passato come parametro `e [2, 3, -2, 1, -2, 5], la funzione dovrà 
ritornare 1.*/
#include <iostream>
using namespace std;

int getZeroSubsequences(int arr[], int length){
    int count = 0;
    for (int i = 0; i < length; i++){
        int partialsum = 0;
        for (int j = i; j < length; j++){
            partialsum += arr[j];
            if (partialsum == 0){
                count++;
            }
        }
    }
    return count;
}