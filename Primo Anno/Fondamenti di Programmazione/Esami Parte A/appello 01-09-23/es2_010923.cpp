//FATTO

/*I Scrivi una funzione revert che prende come parametro 
una stringa C-style str e restituisce una nuova stringa 
che rappresenta la stringa str invertita. Per esempio, 
se str `e "hello", la funzione dovr`a ritornare la stringa
"olleh". I Scrivere una funzione main che legge da 
tastiera una stringa di massimo 50 caratteri, chiama la 
funzione revert passando come parametro la stringa letta 
ed infine stampi la stringa ritornata dalla chiamata a 
revert. Nel caso in cui la lunghezza della stringa 
inserita dall’utente sia maggiore di 50 caratteri, 
la funzione main deve ritornare -1.*/

#include <iostream>
#include <cstring>
using namespace std;

char* revert(char* str){
    
    int lenght = strlen (str);
    if (lenght == 0)
        cout << "Stringa vuota. " << endl;
    char* str2 = new char[lenght];
    int j = 0;
    for(int i = lenght - 1; i >= 0; i--){
        str2[j] = str[i];
        j++;
    }
    str2[lenght] = '\0';
    return str2;
}

int main(){
    
    char str[51];

    cout << "Inserire una stringa: " << endl;
    cin.getline (str, 51, '\n');
    
    if (cin.fail())
        return -1;

    char* reversestr = revert(str); 
    
    delete[] reversestr;
    return 0;
}
// hello 0 1 2 3 4
// olleh 4 3 2 1 0