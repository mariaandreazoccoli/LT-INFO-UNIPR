#include <iostream>
using namespace std;

template <class T>
class Set {
private:
    T* elements;
    int dim;
    int currentSize;

    void enlarge () {
        T* tmp = new T[this->dim * 2];
        for (int i = 0; i < currentSize; i++)
            tmp[i] = this->elements[i];
        this->dim *= 2;
        delete [] this->elements;
        this->elements = tmp;
    }
public:
    Set<T> () {
        this->dim = 5;
        this->elements = new T[this->dim];
        this->currentSize = 0;
    }

    ~Set () {
        delete [] elements;
    }

    Set<T> (const Set<T>& other) {
        this->dim = other.dim;
        this->currentSize = other.currentSize;
        this->elements = new T[this->dim];
        for (int i = 0; i < this->currentSize; i++) 
            this->elements[i] = other.elements[i];
    }

    void add (T elem) {
        if (contains(elem)) 
            throw invalid_argument("l'elemento e' gia' stato inserito");
        if (dim == currentSize) 
            enlarge();
        this->elements[currentSize++] = elem;
    }

    bool contains (T elem) const {
        for (int i = 0; i < this->currentSize; i++)
            if (this->elements[i] == elem)
                return true;
        return false;
    }

    int size () const {
        return this->currentSize;
    }

    Set<T> operator- (Set<T> other) {
        Set<T> result;
        for (int i = 0; i < (this->currentSize > other.currentSize ? other.currentSize : this->currentSize); i++)
            if (other.contains(elements[i]))
                result.add(elements[i]);
        return result;
    }

    void print(ostream& fout) const {
        fout << "{ ";
        for (int i = 0; i < this->currentSize; i++){
            fout << this->elements[i];
            if (i < this->currentSize - 1)
                fout << ", ";
        }
        fout << " }";
    }
};

template <class T>
ostream& operator<< (ostream& fout, const Set<T>& set) {
    set.print(fout);
    return fout;
}

int main() {
    Set<int> mySet;
    mySet.add(1);
    mySet.add(2);
    mySet.add(3);

    Set<int> otherSet;
    otherSet.add(3);
    otherSet.add(4);
    otherSet.add(5);

    Set<int> intersection = mySet - otherSet;

    cout << "My set: " << mySet << endl;
    cout << "Other set: " << otherSet << endl;
    cout << "Intersection: " << intersection << endl;

    return 0;
}