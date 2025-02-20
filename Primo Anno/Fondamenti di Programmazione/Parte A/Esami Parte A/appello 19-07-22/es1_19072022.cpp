/*Scrivere una funzione di tipo int chiamata compact che, presi come parametri un
array di numeri interi a e il numero n di elementi in a ed un array di numeri interi b,
memorizza nell’array b gli elementi di a senza ripetizioni (se un elemento `e presente
pi`u di una volta dovr`a essere memorizzato la prima volta che compare). La funzione
deve ritornare il numero di elementi di a senza ripetizioni. Per esempio:
a = {1 , 2 , 7 , 1 , 2 , 4 , 1 , 7 , 5} // (n = 9)
b = {1 , 2 , 7 , 4 , 5} // la funzione ritorna 5*/

#include <iostream>
using namespace std;

int compact (int a[], int b[], int n){
    int len_b = 0;
    for (int i = 0; i < n; i++){
        bool found = false;
        for (int j = 0; j < len_b; j++){
            if (a[i] == b[j]){
                found = true;
                break;
            }
        }
        if (!found){
            b[len_b] = a[i];
            len_b++;
        }
    }
    return len_b;
}


/*int main() {
    const int n = 9;
    int a[n] = {1, 2, 7, 1, 2, 4, 1, 7, 5};
    int b[n];
    
    cout << "Array a prima della compattazione: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int len_b = compact(a, b, n);

    cout << compact (a, b, n);
    
    cout << "Array b dopo la compattazione: ";
    for (int i = 0; i < len_b; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}*/