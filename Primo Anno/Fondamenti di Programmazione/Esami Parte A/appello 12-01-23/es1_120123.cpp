/*Scrivere una funzione di nome doppia con tipo di ritorno bool che, preso come parametro una stringa
C-style str, controlla se str corrisponde alla concatenazione di due stringhe uguali (e.g., "ciaociao", "canecane").
Non `e consentito usare la libreria cstring.
*/

bool doppia (char* str){
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++){
        len++;
    }

    if (len % 2 != 0)
        return false;
    else {
        for (int i = 0; i < len / 2; i++){
            if (str[i] != str[(len/2)+i]){
                return false;
            }
        }
        return true;
    }
}