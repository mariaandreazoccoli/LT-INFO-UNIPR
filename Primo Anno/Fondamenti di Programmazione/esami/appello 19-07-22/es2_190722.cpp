/*Sia intv il tipo di una struttura dati struct formata da due
campi di tipo intero inf e sup che rappresentano rispettivamente il limite inferiore e
quello superiore di un intervallo chiuso [inf, sup]. Si implementi una funzione add
che accetta come parametri una struttura i di tipo intv e un intero x e aggiunge, se
possibile, l’elemento x all’intervallo i, modificando i stesso. Tale operazione `e possibile
quando (i) x `e contenuto nell’intervallo i (e in questo caso i rimane invariato) oppure
(ii) quando x coincide con il predecessore di inf o con il successore di sup dell’intervallo
i (in questo caso i viene modificato aggiornando rispettivamente inf o sup). In questi
casi la funzione deve ritornare true altrimenti ritorna false.
Per esempio, se i = [3, 7] e x = 8 il nuovo intervallo sar`a i = [3, 8] e la funzione
ritorna true , mentre se x = 9 l’intervallo rimane invariato e la funzione ritorna false*/

//cosa cazzo è sta roba??????????????????????????????????????????????????

#include <iostream>
using namespace std;

struct intv {
    int inf;
    int sup;
};

bool add (intv* i, int n){
    

}