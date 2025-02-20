#include <iostream>
using namespace std;

template <class T>
class MultiSet {
private:
    T* set;
    int dim;
    int top;

    void enlarge() {
        T* newSet = new T[dim*2];
        for (int i = 0; i < dim; i++){
            newSet[i] = set[i];
        }
        this->dim *= 2;
        delete [] this->set;
        this->set = newSet;
    }
public: 
    MultiSet () {
        this->top = 0;
        this->dim = 10;
        this->set = new T[dim];
    }

    MultiSet (const MultiSet& other) {
        this->dim = other.dim;
        this->top = other.top;
        this->set = new T[dim];
        for (int i = 0; i < other.top; i++)
            this->set[i] = other.set[i];
    }

    ~MultiSet () {
        delete [] set;
    }

    bool isEmpty () const {
        return top == 0;
    }

    bool contains (const T& elem) const {
        for (int i = 0; i < top; i++)
            if (set[i] == elem)
                return true;
        return false;
    }

    void add (const T& elem) {
        if (top == dim)
            enlarge();
        this->set[top++] = elem;
    }

    void remove (const T& elem) {
        if (isEmpty())
            throw runtime_error("MultiSet vuoto. ");
        else if (!contains(elem))
            throw runtime_error("Elemento non contenuto nel MultiSet");
        T* newSet = new T[dim];
        int count = 0;
        for (int i = 0; i < top; i++)
            if (set[i] != elem){
                newSet[count] = set[i];
                count++;
            }
        this->top = count;
        delete [] this->set;
        this->set = newSet;
    }

    int cardinality (const T& elem) const {
        int count = 0;
        for (int i = 0; i < top; i++)
            if (set[i] == elem)
                count++;
        return count;
    }

    void print (ostream& dest) const {
        dest << "{ ";
        for (int i = 0; i < top; i++) {
            dest << set[i];
            if (i < top - 1)
                dest << ", ";
        }
        dest << " }";
    }
};

template < class T>
ostream& operator<< (ostream& dest, const MultiSet<T>& set) {
    set.print(dest);
    return dest;
}
