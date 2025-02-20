/*Scrivere una funzione mostFrequent, con tipo di ritorno int, che presi in input un array di interi e
la sua lunghezza, restituisce l’elemento pi`u frequente presente nell’array. Se ci sono pi`u elementi con 
la stessa frequenza massima, restituire uno di essi.*/

#include <iostream>
using namespace std;

int mostfrequent (int* arr, int lenght){
	int mostfr = 0;
	int freq = 0;
	for (int i = 0; i <= lenght; i++){
		int count = 0;
		for (int j = 0; j <= lenght; j++){
			if (arr[i] == arr[j])
				count++;
		}
		if (count > freq){
			mostfr = arr[i];
			freq = count;
        }
    }
	return mostfr;

}

int main(){
	int arr[] = {1,2,3,4,5,6,2};
	cout << mostfrequent(arr, 7) << endl;

	return 0;
}