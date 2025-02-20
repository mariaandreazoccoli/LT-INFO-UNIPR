//FATTO, DA RIFARE X CAPIRE MEGLIO

/*Scrivere una funzione di tipo void di nome concat che, presi come suoi parametri due liste
concatenate semplici l1 ed l2 i cui elementi hanno campo informazione di tipo int, concateni la lista l2 
alla lista l1. Ad esempio, se l1 = {1,7} e l2 = {5,9,12}, dopo la chiamata alla funzione concat passando come 
parametri l1 ed l2, la lista l1 diventa {1,7,5,9,12}. Trattare in modo opportuno anche i casi in cui l1 e/o l2 
siano liste vuote. (+3pt se la funzione `e ricorsiva)*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void concat (node* &l1, node* l2){
    if (l1 == nullptr){
        l1 = l2;
        return;
    }
    else if (l2 == nullptr)
        return;
    else {
        node* temp = l1;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = l2;
    }
}

void concatRec (node* &l1, node* l2){
    if (l1 == nullptr){
        l1 = l2;
        return;
    }
    else if (l2 == nullptr)
        return;
    else if (l1->next == nullptr){
        l1->next = l2;
        return;
    }
    concatRec (l1->next, l2);
    
}


void print (node* lst){
    while (lst != nullptr){
        cout << lst->data << " ";
        lst = lst->next;
    }
}

node* AddAtTheBeginning(node* &lst, int x){
    node* new_node = new node;
    new_node->data = x;
    new_node->next = lst;
    lst = new_node;
    return lst;
}

int main(){
    node* l1 = nullptr;
    node* l2 = nullptr;
    AddAtTheBeginning(l1, 3);
    AddAtTheBeginning(l1, 3);
    AddAtTheBeginning(l1, 2);
    AddAtTheBeginning(l1, 1);

    AddAtTheBeginning(l2, 6);
    AddAtTheBeginning(l2, 5);
    AddAtTheBeginning(l2, 4);
    AddAtTheBeginning(l2, 4);

    cout << "lista 1: "; 
    print(l1);
    cout << endl;
    
    cout << "lista 2: ";
    print(l2);
    cout << endl;

    concatRec(l1, l2);

    cout << "lista concatenata: ";
    print(l1); 
    cout << endl;

    while (l1 != nullptr){
        node* temp = l1;
        l1 = l1->next;
        delete temp;
    }
    
    while (l2 != nullptr){
        node* temp = l2;
        l2 = l2->next;
        delete temp;
    }
    return 0;

}
