/*Scrivere una funzione di nome findLast che, presi come suoi parametri una lista semplicemente
concatenata lst i cui elementi hanno campo informazione di tipo int e un intero elem, ritorni l’ultima 
posizione di elem in lst.
La funzione deve ritornare -1 se la lista lst non contiene l’elemento elem. Ad esempio, se lst = 1 → 2 →
3 → 7 → 2 la chiamata a funzione findLast(lst, 2) ritorner`a 4, mentre findLast(lst, 9) ritorner`a -1. Gestire in
modo opportuno il caso in cui lst `e vuota.
*/

struct node{
    int data;
    node* next;
};

int findLast(node* lst, int elem){
    if (lst == nullptr){
        return -1; 
    }

    int tmp = 0, count = -1;

    node* cursor = lst;
    while (cursor != nullptr){
        if (cursor->data == elem){
            count = tmp;
        }
        tmp++;
        cursor = cursor->next;
    }
    
    return count;
}




