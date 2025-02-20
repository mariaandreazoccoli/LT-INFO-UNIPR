/*Scrivere una funzione removeDuplicates che, preso come parametro una stringa C-style str ritorna una nuova
stringa ottenuta eliminando tutti i caratteri duplicati da str.
Scrivere una funzione main che legge da tastiera una stringa di massimo 50 caratteri, chiama la funzione 
removeDuplicates passando come parametro la stringa letta ed infine stampa il risultato ritornato dalla chiamata 
alla funzione removeDuplicates.*/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LEN 50

char* removeDuplicates(char* str){
    
    int len = strlen(str);
    char* str2 = new char[len];
    int len2 = 0;

    for (int i = 0; i < len; i++){
        int ncopy = 0;
        for (int j = 0; j < len; j++){
            if (str[i] == str[j]){
                ncopy++;
            }
        }
        if (ncopy <= 1){
            str2[len2] = str[i];
            len2++;
        }
    }
    str2[len2] = '\0';
    return str2;
}

int main(){
    char str[MAX_LEN];

    cout << "Inserire una stringa: ";
    cin.getline(str, MAX_LEN, '\n');
    
    if (cin.fail()){
        return -1;
    }

    cout << "Nuova stringa: " << removeDuplicates(str) << endl;
}