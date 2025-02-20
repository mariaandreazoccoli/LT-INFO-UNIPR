//FATTO

/*Scrivere una funzione trim che, presi come parametri una stringa C-style str e un carattere c, 
ritorna una nuova stringa ottenuta eliminando tutte le occorrenze del carattere c.
Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione 
trim passando come parametro la stringa letta e il carattere ’a’, ed infine stampa il risultato ritornato 
dalla chiamata alla funzione trim.*/

#include <iostream>
#include <cstring>
using namespace std;

char* trim(char* str, char c){
    int lenght = strlen(str);

    int newlenght = 0;
    for (int i = 0; i < lenght; i++){
        if (str[i] != c){
            newlenght++;
        }
    }

    char* str2 = new char [newlenght+1];
    int j = 0;

    for (int i = 0; i < lenght; i++){
        if (str[i] != c){
            str2[j++] = str[i];
        }
    }
    str2[j] = '\0';
    return str2;
}

int main(){
    char str[101];
    char c = 'a';
    cout << "Inserire una stringa: " << endl;
    cin.getline(str, 100, '\n');

    char* str2 = trim(str, c);

    for (int i = 0; str2[i] != '\0'; i++){
        cout << str2[i];
    }
    delete[] str2;
    return 0;
}