//FATTO, HO CAPITO 

/*Scrivere una funzione main che legge da tastiera due stringhe s1 e s2 di lunghezza massima 100
caratteri. La funzione deve:
I stampare a video la stringhe s1 e s2;
I stampare a video un messaggio che indica se s1 `e l’anagramma di s2 (per esempio, la stringa "casata" 
`e anagramma di "aaacst").
Utilizzare solamente stringhe C-style.*/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LEN 100

bool anagrams(char* str1, char* str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return false;

    char tmp1[MAX_LEN];
    char tmp2[MAX_LEN];

    for (int i = 0; i < len1; i++){
        tmp1[i] = str1[i];
        tmp2[i] = str2[i];
    }

    for (int i = 0;i < len1; i++){
        for (int j = 0; j < len1 - i; j++){
            if (tmp1[j] > tmp1[j+1]){
                char temp = tmp1[j];
                tmp1[j] = tmp1[j+1];
                tmp1[j+1] = temp;
            }
            if (tmp2[j] > tmp2[j+1]){
                char temp = tmp2[j];
                tmp2[j] = tmp2[j+1];
                tmp2[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < len1; i++){
        if(tmp1[i] != tmp2[i])
            return false;
    }

    return true;
}

int main(){
    
    char str1[MAX_LEN], str2[MAX_LEN];

    cout << "Inserire la prima stringa: ";
    cin.getline (str1, MAX_LEN, '\n');

    cout << "Inserire la seconda stringa: ";
    cin.getline (str2, MAX_LEN, '\n');
    cout << endl;

    cout << str1 << endl;
    cout << str2 << endl;

    if(anagrams(str1, str2))
        cout << "Sono anagrammi. " << endl;
    else
        cout << "Non sono anagrammi. " << endl;
    
    return 0;
}