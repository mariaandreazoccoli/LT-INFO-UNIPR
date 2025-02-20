//FATTO, DA RIFARE

/* Scrivere una funzione di tipo bool di nome isDescending che, 
preso come suo parametro una lista concatenata semplice l i cui 
elementi hanno campo informazione di tipo int, controlli se la lista 
`e strettamente descrescente. Ad esempio, se l = {12,3, -5, -7}, la 
funzione isDescending ritorna true, se l = {12, 3, 9, 1}, la
funzione isDescending ritorna false. Trattare in modo opportuno 
anche i casi in cui l sia una lista vuota. Si scriva inoltre il tipo 
struttura che modella una lista semplicemente concatenata. 
(+2pt se la funzione `e ricorsiva)*/

#include <iostream>
using namespace std;

struct node{
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

/*bool isDescending(node* lst){

    while(lst != nullptr && lst->next != nullptr){
        if (lst->data < lst->next->data){
            return false;
        }
        lst = lst->next;
    }
    return true;
}*/

bool isDescendingRec(node* lst){
    
    if (lst == nullptr || lst->next == nullptr)
        return true;

    if (lst->data > lst->next->data){
        return isDescendingRec(lst->next);
    }
    else 
        return false;   
}

int main(){

    node* lst = nullptr;

    AddAtTheBeginning(lst, -7);
    AddAtTheBeginning(lst, -5);
    AddAtTheBeginning(lst, 3);
    AddAtTheBeginning(lst, 12);

    print(lst);
    cout << endl;
    /*if (isDescending(lst)){
        cout << "e' in ordine decrescente " << endl;
    }
    else 
        cout << "non e' in ordine decrescente " << endl;*/
    
    if (isDescendingRec(lst)){
        cout << "e' in ordine decrescente " << endl;
    }
    else 
        cout << "non e' in ordine decrescente " << endl;

    return 0;

}