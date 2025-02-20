//FATTO

/*Scrivere una funzione di nome revert con tipo di ritorno 
void che, preso come parametro una stringa
C-style str, inverte l’ordine dei caratteri della stringa.
Esempio:
char s [5] = " hello " ;
revert ( s );
cout << s ; // stampa " olleh "
Non `e consentito usare la libreria cstring.*/

#include <iostream>
using namespace std;

void revert(char* str){
    int lenght = 0;
    while (str[lenght] != '\0'){
        lenght++;
    }
    
    int j = lenght - 1;
    char tmp[lenght];
    for (int i = 0; i < lenght; i++){
        tmp[i] = str[i];
    }
        //cout << tmp << endl;
    for(int i = 0; i < lenght; i++){
        str[j] = tmp[i];
        j--;
    }
}

int main(){
    char str[50];
    cout << "Inserire: " << endl;
    cin.getline(str, 50, '\n');
    revert(str);
    cout << str;
}