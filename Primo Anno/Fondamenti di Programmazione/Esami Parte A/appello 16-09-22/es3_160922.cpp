/*Scrivere una funzione di nome firstEven che, preso come parametro una lista concatenata semplice
lst i cui elementi hanno campo informazione di tipo int ritorni il puntatore al primo elemento pari 
della lista. Se la lista non contiene elementi pari, ritornare NULL. Gestire in modo opportuno il caso in cui 
lst sia vuota. (+2pt se la funzione `e ricorsiva)
Si scriva inoltre il tipo struttura che modella una lista semplicemente concatenata*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* firstEvenRec(node* lst){
    if (lst == nullptr)
        return NULL;
    else if (lst->data % 2 == 0)
        return lst;
    else
       return firstEvenRec(lst->next);
}

node* firstEven(node* lst){
    while (lst != nullptr){
        if (lst->data % 2 == 0){
            return lst;
        }
        lst = lst->next;
    }
    return NULL;
}