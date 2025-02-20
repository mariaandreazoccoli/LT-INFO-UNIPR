//FATTO

/*scrivere una funzione di tipo int chiamata compact che, presi come parametri un array di numeri
reali a, il numero n di elementi in a ed un array di numeri reali b, copia nell’array b tutti e soli 
gli elementi di a che sono strettamente maggiori della media degli elementi di a. La funzione ritorna il 
numero di elementi inseriti nell’array b.*/

int compact(float arrA[], int elA, float arrB[]){
    int elB = 0;
    float sum = 0;
    for (int i = 0; i < elA; i++){
        sum += arrA[i];
    }
    float media = sum / elA;
    
    for (int i = 0; i < elA; i++){
        if (arrA[i] > media){
            arrB[elB++] = arrA[i];
        }
    }
    return elB;
}
