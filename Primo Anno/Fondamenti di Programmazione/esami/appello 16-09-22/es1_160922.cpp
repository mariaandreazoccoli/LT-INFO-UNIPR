/*Scrivere una funzione di nome palindroma con tipo di ritorno bool che, preso come parametro una
stringa C-style str, controlla se str `e palindroma. Una parola `e palindroma se pu`o essere letta
indifferentemente da sinistra verso destra e da destra verso sinistra. Non `e consentito usare la libreria cstring.*/

bool palindroma(char* str){
	
    int length = 0;
	
    for(int i = 0; str[i] != '\0'; i++){
		length++;
	}
	
	for (int i = 0; i < length / 2; i++){
		if (str[i] != str[length - 1 - i]){
			return false;
		}
	}
	return true;
}