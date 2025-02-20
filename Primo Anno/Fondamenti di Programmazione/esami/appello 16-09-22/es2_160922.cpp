/*Scrivere una funzione di nome coincide che, presi come suoi parametri due array di interi a1 ed a2
e le loro dimensioni dim1 e dim2, determina e restituisce come risultato il numero di elementi coincidenti in a1 
e a2: un elemento e1 di a1 ed un elemento e2 di a2 si dicono coincidenti se hanno lo stesso indice e lo stesso 
valore. Per esempio, se a1 = {7,6,4,-1,2,5,12} e a2 = {6,7,4,5,2}, la funzione coincide deve ritornare 2.*/

int coincide (int a1[], int a2[], int dim1, int dim2){

    int count = 0;

    if (dim1 > dim2){
        for (int i = 0; i <dim2; i++){
            if (a1[i] == a2[i]){
                count++;
            }
        }
    }
    else {
        for (int i = 0; i < dim1; i++){
            if (a1[i] == a2[i]){
                count++;
            }
        }
    }
    return count;
}

//se mi svegliassi e mi ricordassi che esiste l'operatore ternario potrei scrivere cosi:

int coincide2(int a1[], int a2[], int dim1, int dim2){

    int count = 0;

    for (int i = 0; i < (dim1<dim2?dim1:dim2); i++){
        count += (a1[i] == a2[i]);
    }

    return count;
}