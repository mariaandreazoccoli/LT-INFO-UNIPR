//FATTO

/*Scrivere una funzione ruota che, presi in input un array di interi a e la sua lunghezza, sposti in
avanti di una posizione tutti i valori dell’array. L’ultimo valore dovr`a essere spostato all’inizio 
dell’array. La funzione main riportata di seguito
int main () {
int x [4] = {2 , 3 , 4 , 5};
ruota (x , 4);
print (x , 4);
return 0;
}
dovr`a quindi stampare 5 2 3 4. (dove la funzione print utilizzata nella funzione main stampa 
gli elementi di un array di interi)*/

#include <iostream>
using namespace std;

void print(int* x, int y){
    for (int i = 0; i < y; i++){
        cout << x[i] << " ";
    }
    cout << endl;
    return;
}

int* ruota (int* x, int y){
    int tmp[y + 1];
    for (int i = 0; i < y; i++){
        tmp[i] = x[i];
    }
    print(tmp, 4);
    x[0] = tmp[y - 1];
    for (int i = 0; i < y; i++){
        x[i+1]= tmp[i];
    }
    return x;
}

int main () {
int x [4] = {2 , 3 , 4 , 5};
ruota (x , 4);
print (x , 4);
return 0;
}

//IMPARA A CONTARE PERFAVORE