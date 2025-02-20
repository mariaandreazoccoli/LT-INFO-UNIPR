/*Scrivere una funzione add white spaces che, presi come parametri una stringa C-style str e un carattere c, 
ritorna una nuova stringa ottenuta aggiungendo uno spazio dopo ogni occorrenza del carattere c in str.
I Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione add 
white spaces passando come parametro la stringa letta e il carattere ’a’, ed infine stampa il risultato ritornato 
dalla chiamata alla funzione add white spaces. */

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LEN 100

char* AddWhiteSpaces(char* str, char c){
    char* str2 = new char[MAX_LEN];
    int len = strlen(str);
    int len2 = 0;

    for (int i = 0; i < len; i++){
        if (str[i] == c){
            str2[len2++] = str[i];
            str2[len2++] = ' ';
        } else {
            str2[len2++] = str[i];
        }
    }
    str2[len2] = '\0';
    return str2;
}

int main(){
    char str[MAX_LEN];

    cout << "Inserire una stringa: ";
    cin.getline(str, MAX_LEN, '\n');

    cout << "Nuova stringa: " << AddWhiteSpaces(str, 'l');

    return 0;

}