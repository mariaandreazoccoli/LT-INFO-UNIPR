//FATTO, DA RIFARE X CAPIRE MEGLIO

/*Scrivere una funzione main che legge una parola (di massimo 30 caratteri) inserita 
da tastiera. Il programma deve:
- visualizzare la parola inserita;
- verificare se la parola `e palindroma. Una parola `e palindroma se puo essere 
letta indifferentemente da sinistra verso destra e da destra verso sinistra. 
Ad esempio, le seguenti parole sono palindrome: otto, madam, a.*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[30];
    bool found = true;

    cout <<"Inserire una parola: " << endl;
    cin.getline(str, 30, '\n');

    cout << str << endl;
    
    int lenght = strlen(str);

    for(int i = 0; i < lenght /2; i++){
        if (str[i] != str[lenght - 1 - i]){
            found = false;
            break;
        }
    }

    if (found){
        cout << "la parola e' palindroma. " << endl;
    }
    else
        cout << "La parola non e' palindroma. " << endl;
    return 0;
}