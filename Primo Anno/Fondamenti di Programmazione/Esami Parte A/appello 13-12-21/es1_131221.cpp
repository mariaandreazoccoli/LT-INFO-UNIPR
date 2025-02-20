//FATTO

/*Scrivere una funzione di nome coincide che, presi come suoi parametri due array di interi a1 ed
a2 e le loro dimensioni d1 e d2, determina e restituisce come risultato il numero di elementi coincidenti in 
a1 e a2: un elemento e1 di a1 ed un elemento e2 di a2 si dicono coincidenti se hanno lo stesso indice e lo 
stesso valore. Per esempio, se a1 = {7,6,4,-1,2,5,12} e a2 = {6,7,4,5,2}, la funzione coincide deve ritornare 2.*/

int coincide(int arr1[], int arr2[], int d1, int d2){
    int n = 0;
    if (d1 > d2){
        for (int i = 0; i < d2; i++){
            if (arr1[i] == arr2[i])
                n++;
        }
    }
    else {
        for (int i = 0; i < d1; i++){
            if (arr1[i] == arr2[i])
            n++;
        }
    }
    return n;
}