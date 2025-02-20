/*scrivere una funzione hasZeroSum che prenda come parametri un array di numeri interi e la sua
lunghezza e ritorna true se esiste una sottosequenza nell’array la cui somma `e pari a zero, altrimenti la 
funzione ritorna false. Per esempio, se l’array passato come parametro `e [2, 3, -2, 1, -2, 5], la funzione 
dovr`a ritornare true.*/

bool hasZeroSum(int arr[], int len){

    for(int i = 0; i < len; i++){
        int partialsum = 0;
        for (int j = i; j < len; j++){
            partialsum+=arr[j];
            if (partialsum == 0){
                return true;
            }
        } 
    }
    return false;
}