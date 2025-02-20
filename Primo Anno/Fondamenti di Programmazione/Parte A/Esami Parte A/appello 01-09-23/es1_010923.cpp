
/*Scrivere una funzione che prenda come parametri un array di numeri interi, la sua lunghezza e un
parametro di tipo intero k e ritorna il numero di sottosequenze nell’array la cui somma `e pari a k. 
Per esempio, se l’array passato come parametro `e [1, 2, -3, 7, -1, 4, 3] e k = 3, la funzione dovr`a 
ritornare 4*/

#include <iostream> 
using namespace std;

int a(int* arr, int k, int lenght){
    int count = 0; //per contare quante sottosequenze ci sono
    for (int i = 0; i < lenght; i++){
        int partial_sum = 0;
        for (int j = i; j < lenght; j++){
            partial_sum += arr[j];
            if (partial_sum == k)
                count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 2, -3, 7, -1, 4, 3};
    int k = 3;
    int lenght = 6;

    int subsequences = a(arr, k, lenght);
    cout << subsequences << endl;

    return 0;
}