/*Scrivere una funzione di nome union che, presi come suoi parametri due liste concatenate semplici
l1 ed l2 i cui elementi hanno campo informazione di tipo int, ritorni come risultato l’unione delle due 
liste, ovvero una nuova lista contenente tutti gli elementi delle liste l1 e l2 senza ripetizioni. Ad esempio, 
se l1 = 1 → 2 → 2 → 7 e l2 = 1 → 3 → 5, la chiamata a funzione union(l1, l2) ritorner`a la lista 
1 → 2 → 7 → 3 → 5. Gestire in modo opportuno i casi in cui l1 e/o l2 sono vuote*/

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
    cout << endl;
}

void add(node* &lst, int n){
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
    if (lst == nullptr)
        return false;
    else {
        while (lst != nullptr){
            if (lst->data == n)
                return true;
            lst = lst->next;
        }
        return false;
        }
}

node* unione (node* l1, node* l2){
    node* l3 = nullptr;
    if (l1 == nullptr && l2 == nullptr){
        return l3;
    } else if (l1 == nullptr) {
        while (l2 != nullptr){
            if (!found(l3, l2->data))
                add (l3, l2->data);
            l2 = l2->next;
        }
    } else if (l2 == nullptr) {
        while (l1 != nullptr){
            if (!found(l3, l1->data))
                add (l3, l1->data);
            l1 = l1->next;
        }
    } else {
        while (l1 != nullptr){
            if (!found(l3, l1->data))
                add (l3, l1->data);
            l1 = l1->next;
        }
        while (l2 != nullptr){
            if (!found(l3, l2->data))
                add (l3, l2->data);
            l2 = l2->next;
        }
    }
    return l3;
}

int main() {
    node* l1 = nullptr;
    node* l2 = nullptr;
    node* l3 = nullptr;

    add(l1, 1);
    add(l1, 2);
    add(l1, 2);
    add(l1, 7);
    print(l1);

    add(l2, 1);
    add(l2, 3);
    add(l2, 5);
    print(l2);

    cout << endl;

    l3 = unione(l1, l2);
    print(l3);

    while (l1 != nullptr) {
        node* temp = l1;
        l1 = l1->next;
        delete temp;
    }

    while (l2 != nullptr) {
        node* temp = l2;
        l2 = l2->next;
        delete temp;
    }

    while (l3 != nullptr) {
        node* temp = l3;
        l3 = l3->next;
        delete temp;
    }

    return 0;
}