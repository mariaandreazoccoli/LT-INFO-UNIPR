/*Scrivere una funzione di nome concat con tipo di ritorno void che, presi come suoi parametri due
liste semplicemente concatenate l1 ed l2 i cui elementi hanno campo informazione di tipo int, concateni la lista 
l2 alla lista l1. Ad esempio, se l1 = {1,7} e l2 = {5,9,12}, dopo la chiamata alla funzione concat passando come 
parametri l1 ed l2, la lista l1 diventa {1,7,5,9,12}. Trattare in modo opportuno anche i casi in cui l1 e/o l2 siano
liste vuote. Si scriva inoltre il tipo struttura che modella una lista semplicemente concatenata*/

#include <iostream>
using namespace std;

struct node{
    int data; 
    node* next;
};

void concat (node* &l1, node* l2){

    if (l1 == nullptr){
        l1 = l2;
        return;
    }
    else if (l2 == nullptr){
        return;
    }
    else {
        node* cursor = l1; 
        while (cursor->next != nullptr){
            cursor = cursor->next;
        }
        cursor->next = l2;
    }
}

/*void print(node* lst){
    while (lst != nullptr){ 
        cout << lst->data << " ";
        lst = lst->next;
    }
}

void AddAtTheBeginning(node* &lst, int n){
    node* new_node = new node;
    new_node->data = n;
    new_node->next = lst;
    lst = new_node;
}

int main(){
    node* l1 = nullptr;
    node* l2 = nullptr;
    AddAtTheBeginning(l1, 3);
    AddAtTheBeginning(l1, 2);
    AddAtTheBeginning(l1, 1);
    AddAtTheBeginning(l2, 6);
    AddAtTheBeginning(l2, 5);
    AddAtTheBeginning(l2, 4);

    print(l1);
    cout << endl;
    print(l2);
    cout << endl;
    concat(l1, l2);
    print(l1);

    return 0;
}*/

