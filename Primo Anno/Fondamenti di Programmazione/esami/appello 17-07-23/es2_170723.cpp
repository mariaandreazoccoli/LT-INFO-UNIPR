//FATTO, DA RIGUARDARE
/*Scrivere una funzione countUnique che, preso come parametro una stringa C-style str ritorna il numero di caratteri
unici presenti nella stringa. Per esempio, se la stringa `e "hello", la funzione dovr`a ritornare 3.
Scrivere una funzione main che legge da tastiera una stringa di massimo 50 caratteri, chiama la funzione countUnique
passando come parametro la stringa letta ed infine stampa il risultato ritornato dalla chiamata alla funzione
countUnique. Nel caso in cui la lunghezza della stringa inserita dall’utente sia maggiore di 50 caratteri, 
la funzione main deve ritornare -1.*/

/*
        1- fun countUnique, prende come parametri char str
        2- la fun torna il numero di caratteri unici nella str
    3- fun main legge da tastiera mx 50 
    4- +50? return -1
*/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LEN 50

int countUnique (char* str){
    int count = 0;
    int len = strlen(str);
    
    for(int i = 0; i < len; i++){
        int ncopy = 0;
        for (int j = 0; j < len; j++){
            if (str[i] == str[j]){
                ncopy++;
            }
        }
        if (ncopy <= 1){
                count++;
            }
    }
    return count;
}

int main(){
    char str[MAX_LEN];

    cout << "Inserire stringa: ";
    cin.getline (str, MAX_LEN, '\n');

    if(cin.fail()){
        return -1;
    }

    cout << "Caratteri unici: " << countUnique(str) << endl;
}