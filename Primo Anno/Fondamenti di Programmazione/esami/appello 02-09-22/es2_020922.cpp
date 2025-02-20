//GIUSTO, MA DA RIFARE

/*Scrivere una funzione main che legge una sequenza di interi positivi 
da tastiera e li memorizza in un array dinamico di interi a (dimensione 
massima 1000 elementi). La lettura si interrompe quando l’utente inserisce
da tastiera un intero negativo. La funzione main deve:
- stampare a video l’array a
- creare un nuovo array dinamico b in cui vengono copiati tutti gli elementi 
dell’array a che compaiono solo una volta in a
- stampare a video l’array b
- deallocare opportunamente la memoria dinamica utilizzata
Per esempio, se l’array a `e [3 6 2 7 6 2 8], l’array b sar`a [3 7 8];*/


#include <iostream>
using namespace std;

int main(){
    int* a = new int[1000];
    int sizeA = 0;
    //inserimento numeri
    do{
    cout <<  "Inserisci un numero: " << endl;
    cin >> a[sizeA];
    sizeA++;
    } while (a[sizeA - 1] >= 0);
    
    //stampa a video di a
    for (int j = 0; j < sizeA - 1; j++){
        cout << a[j] << " ";
    }
    cout << endl;
    
    //nuovo array b
    //cout << "arr b" << endl;

    int* b = new int[1000];
    int sizeB = 0; 

    for (int i = 0; i < sizeA - 1; i++){
        int ncopy = 0;
        for (int j = 0; j < sizeA - 1; j++){
            if (a[i] == a[j]){
                ncopy++;
            }
        }
        //cout << "fine for" << endl;
        if (ncopy <= 1){
            b[sizeB] = a[i];
            sizeB++;
        }
    }
    //cout << "stampa arr b" << endl;
    for (int j = 0; j < sizeB; j++){
        cout << b[j] << " ";
    }
    
    delete[] a;
    delete[] b;
    return 0;
}