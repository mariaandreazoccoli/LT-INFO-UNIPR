//FATTO

/*Scrivere una funzione di tipo int di nome sum che, preso come parametro una lista concatenata
semplice l i cui elementi hanno campo informazione di tipo int, e un intero m, restituisce la somma 
dei soli valori della lista che sono multipli di m. Se la lista `e vuota, la funzione ritorna il valore 0. 
(+2pt se la funzione `e ricorsiva)*/

struct node {
    int data;
    node* next;
};

int sum(node* l, int m){

    int somma = 0;
    if (l == nullptr){
        return somma;
    }
    else {
        while (l != nullptr){
            if (l->data % m == 0){
                somma += l->data;
            }
            l = l->next;
        } 
    }
    return somma;
}