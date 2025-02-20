//FATTO, MA ASSOLUTAMENTE DA RIGUARDARE

/*Scrivere una funzione di nome remove con tipo di ritorno void che, presi come parametri una lista
semplicemente concatenata lst, i cui elementi hanno campo informazione di tipo int, e un valore intero e,
rimuova da lst tutti gli elementi maggiori di e. Gestire in modo opportuno il caso in cui lst `e vuota. 
Si scriva inoltre il tipo struttura che modella una lista semplicemente concatenata.*/

#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

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

void remove(node* &lst, int e){
	
	if (lst == nullptr){
		cout << "Lista vuota. " << endl;
		return;
	}	
	
    while (lst != nullptr && lst->data > e) {
        node* tmp = lst;
        lst = lst->next;
        delete tmp;
    }

	node* cursor = lst; 
	while (cursor->next != nullptr){
		if (cursor->next->data > e){
			node* tmp = cursor->next;
			cursor->next = cursor->next->next;
			delete tmp;
		}
        else
            cursor = cursor->next;
	}
}

int main(){
    node* l1 = nullptr;

    AddAtTheBeginning(l1, 2);
    AddAtTheBeginning(l1, 10);
    AddAtTheBeginning(l1, 3);
    AddAtTheBeginning(l1, 8);
    AddAtTheBeginning(l1, 5);
    AddAtTheBeginning(l1, 1);

    cout << "lista: "; 
    print(l1);
    cout << endl;

    remove(l1, 4);

    cout << "lista modificata: "; 
    print(l1);
    cout << endl;


    return 0;
}