//FATTO, DA RIFARE X CAPIRE MEGLIO

/*Scrivere una funzione di nome concat con tipo di ritorno void che, presi come suoi 
parametri due liste concatenate semplici l1 ed l2 i cui elementi hanno campo informazione 
di tipo char, concateni la lista l2 alla lista l1. Ad esempio, se l1 = {’a’, ’d’} e 
l2 = {’g’, ’f’, ’l’}, dopo la chiamata alla funzione concat passando come parametri l1 
ed l2, la lista l1 diventa {’a’,’d’, ’g’, ’f’, ’l’}. Gestire in modo opportuno i casi 
in cui l1 e/o l2 siano liste vuote. (+2pt se la funzione `e ricorsiva*/

struct node{
    char data;
    node* next;
};

void concatrec(node* &l1, node* l2){
    if (l1 == nullptr){
        l1 = l2;
        return;
    }
    if (l2 == nullptr)
    return;

    if (l1->next == nullptr)
        l1->next = l2;
        return;

    concatrec(l1->next, l2);
}