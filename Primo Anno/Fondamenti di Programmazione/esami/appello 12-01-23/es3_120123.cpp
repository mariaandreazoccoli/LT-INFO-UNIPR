/*Scrivere una funzione di nome intersect che, presi come suoi parametri due liste semplicemente
concatenate l1 ed l2 i cui elementi hanno campo informazione di tipo int ritorni come risultato 
l’intersezione delle due liste, ovvero una nuova lista contenente gli elementi contenuti sia nella lista l1 
che nella lista l2. Ad esempio, se l1 = 1 → 2 → 3 → 7 e l2 = 1 → 3 → 5, la chiamata a funzione intersect(l1, l2) 
ritorner`a la lista 1 → 3. E possibile supporre che le liste l1 e l2 non abbiano elementi ripetuti. 
Gestire in modo opportuno i casi in cui l1 e/o l2 sono vuote*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void print (node* lst){
    while (lst != nullptr){
        cout << lst->data << " ";
        lst = lst->next;
    }
}

void add (node* &lst, int n){
    if (lst == nullptr){
        node* new_node = new node;
        new_node->data = n;
        new_node->next = nullptr;
        lst = new_node;
    } else {
        node* new_node = new node;
        new_node->data = n;
        new_node->next = nullptr;

        node* cursor = lst;
        while (cursor->next != nullptr)
            cursor = cursor->next;
        cursor->next = new_node;
    }
}

bool found (node* lst, int n){
    if (lst == nullptr){
        return false;
    } else {
        while (lst != nullptr){
            if (lst->data == n)
                return true;
            lst = lst->next;
        }
    }
    return false;
}

node* intersect (node* l1, node* l2){
    node* lst = new node;
    lst = nullptr;
    if (l1 == nullptr || l2 == nullptr)
        return nullptr; // lista vuotaèj 
    while (l1 != nullptr){
        if (found(l2, l1->data))
            add(lst, l1->data);
        l1 = l1->next;
    }

    return lst;
}

int main(){
    node* l1 = nullptr;
    node* l2 = nullptr;

    add(l1, 1);
    add(l1, 2);
    add(l1, 3);
    add(l1, 4);
    add(l2, 2);
    add(l2, 4);

    cout << "lista: "; 
    print(l1);
    cout << endl;

    cout << "lista intersect: "; 
    print(intersect(l1, l2));
    cout << endl;

    return 0;
}