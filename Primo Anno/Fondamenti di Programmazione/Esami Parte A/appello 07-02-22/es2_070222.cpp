#include <iostream>
using namespace std;

#define MAX_LEN 1000

int main(){
    int* a = new int[MAX_LEN];
    int len = 0;

    do {
        cout << "Inserire un numero: ";
        cin >> a[len++];
    } while(a[len-1] >= 0);

    

    for (int i = 0; i < len - 1; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int* b = new int[MAX_LEN];
    int lenb = 0, min = 0, max = 0;

    for (int i = 0; i < len - 1; i++){
        if (i == 0){
            min = a[i];
            max = a[i];
        }
        else if (min > a[i])
            min = a[i];
        else if (max < a[i])
            max = a[i];        
    }

    for (int i = 0; i < len - 1; i++){
        if (a[i] != min && a[i] != max)
            b[lenb++] = a[i];
    }

    for (int i = 0; i < lenb; i++){
        cout << b[i] << " ";
    }
    delete[] a;
    delete[] b;

    return 0;
}