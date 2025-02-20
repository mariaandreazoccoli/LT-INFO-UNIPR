/*Scrivere una funzione di tipo bool di nome equals che, presi
come parametri due liste concatenate semplici l1 e l2 i cui elementi hanno campo
informazione di tipo int, ritorna true se le due liste sono uguali, false altrimenti.
Gestire opportunamente i casi in cui l1 o l2 siano vuote. (+2pt se la funzione `e
ricorsiva)*/

struct node{
    int data;
    node* next;
};

bool equals(node* l1, node* l2){
    if (l1 == nullptr && l2 == nullptr)
        return true;
    else if (l1 == nullptr || l2 == nullptr)
        return false;
    else 
        return (l1->data == l2->data) && (equals(l1->next, l2->next));
}