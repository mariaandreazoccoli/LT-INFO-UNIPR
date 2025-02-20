#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LEN 100

char* trim (char* str){
    char* str2 = new char[MAX_LEN];
    int len = strlen(str);
    int len2 = 0;

    for (int i = 0; i < len; i++){
        if (str[i] != ' '){
            str2[len2] = str[i];
            len2++;
        }
    }
    str2[len2] = '\0';
    return str2;
}

int main(){
    char str[MAX_LEN];
    cout << "Inserire stringa: " << endl;
    cin.getline (str, MAX_LEN, '\n');

    cout << "Nuova stringa: " << trim(str) << endl;

    return 0;
}

