//FATTO STATT ACCUORT A QUELLO CHE TORNI (stavi tornando str invece che str2)

/*Scrivere una funzione noVowels che, preso come parametro una stringa C-style str ritorna 
una nuova stringa ottenuta eliminando tutte le vocali contenute in str.
Scrivere una funzione main che legge da tastiera una stringa di massimo 50 caratteri, 
chiama la funzione noVowels passando come parametro la stringa letta ed infine stampa il 
risultato ritornato dalla chiamata alla funzione noVowels. Nel caso in cui la lunghezza
della stringa inserita dall’utente sia maggiore di 50 caratteri, la funzione
main deve ritornare -1.*/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LENGHT 50

char* NoVowels (char* str){
	int lenght1 = strlen(str);
	char* str2 = new char[MAX_LENGHT];
	int lenght2 = 0;
	for (int i = 0; i < lenght1; i++){
		if (str[i] != 'a' 
		    && str[i] != 'e' 
		    && str[i] != 'i'
            && str[i] != 'o'
            && str[i] != 'u'
            && str[i] != 'A'
            && str[i] != 'E'
            && str[i] != 'I'
            && str[i] != 'O'
            && str[i] != 'U') {
			str2[lenght2] = str[i];
			lenght2++;
		}
	}
	str2[lenght2] = '\0';

	return str2;
}

int main(){

	char str[MAX_LENGHT];
	
	cout << "Inserire stringa: " << endl;
	cin.getline(str, MAX_LENGHT, '\n');
	
	if (cin.fail()){
		cout << "Stringa inserita invalida. " << endl;
		return -1;
	}
	
	char* str2 = NoVowels(str);
	cout << str2 << endl;
	
	delete[] str2;

	return 0;	
	
}