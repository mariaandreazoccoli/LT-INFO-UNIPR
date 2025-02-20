/*Scrivere una funzione che preso come argomento una lista semplicemente concatenata lst i cui
elementi hanno campo informazione di tipo int ritorni una nuova lista che contiene solamente gli elementi di lst
strettamente maggiori di zero. Ad esempio, se lst = {1,7, -2, 1, -3, 5}, la funzione dovr`a ritornare la lista 
{1, 7, 1, 5}. Trattare in modo opportuno i casi in cui lst sia vuota. Si scriva inoltre il tipo struttura che 
modella una lista semplicemente concatenata.*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* GreaterThanZero(node* lst){
    node* l = nullptr;

    if (lst == nullptr)
        return l;
    
    while (lst != nullptr){
        if (lst->data > 0){
            node* new_node = new node;
            new_node->data = lst->data;
            new_node->next = nullptr;

            if (l == nullptr)
                l = new_node;
            else {
                node* cursor = l;
                while (cursor->next != nullptr){
                    cursor= cursor->next;
                }
                cursor->next = new_node;
            }
        }
        lst = lst->next;
    }
    return l;
}
