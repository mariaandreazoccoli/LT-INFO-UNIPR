//FATTO

/*Scrivere una funzione che preso come argomento una lista semplicemente concatenata lst i cui
elementi hanno campo informazione di tipo int ritorni una nuova lista che contiene solamente gli
elementi di lst strettamente maggiori di zero. Ad esempio, se lst = {1,7, -2, 1, -3, 5}, la funzione
dovr`a ritornare la lista {1, 7, 1, 5}. Trattare in modo opportuno i casi in cui lst sia vuota.
Si scriva inoltre il tipo struttura che modella una lista semplicemente concatenata*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void print(node* lst){
    if (lst == nullptr) {
        cout << "lista vuota" << endl;
        return;
    }
    while (lst != nullptr){
        cout << lst->data << " ";
        lst = lst->next;
    }
}

void AddAtTheBeginning(node* &lst, int n){
    node* new_node = new node;
    new_node->data  = n;
    new_node->next = lst;
    lst = new_node;
}

node* fun(node* lst){

    node* lst2 = nullptr;

    while(lst != nullptr){
        if (lst->data > 0) {
            node *new_n = new node;
            new_n->data = lst->data;
            new_n->next = lst2;
            lst2 = new_n;
        }
        lst = lst->next;
    }
    if (lst2 == nullptr)
        cout << "Lista vuota. " << endl;

    print(lst2);
    return lst2;

}

int main(){

    node* lst = nullptr;

    AddAtTheBeginning(lst, 5);
    AddAtTheBeginning(lst, -3);
    AddAtTheBeginning(lst, 1);
    AddAtTheBeginning(lst, -2);
    AddAtTheBeginning(lst, 7);
    AddAtTheBeginning(lst, 1);

    print(lst);
    cout << endl;
    fun(lst);
    return 0;

}
