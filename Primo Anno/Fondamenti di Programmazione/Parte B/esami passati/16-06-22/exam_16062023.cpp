#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T* container;
    int dim;
    int top;

    void enlarge() {
        T* new_container = new T[dim * 2];
        for (int i = 0; i < dim; i++){
            new_container[i] = this->container[i];
        }
        this->dim *= 2;
        delete [] this->container;
        this->container = new_container;
    }
public:
    Stack<T> () {
        this->container = new T[5];
        this->dim = 0;
        this->top = 0;
    }
    ~Stack<T> () {
        delete [] container;
    }
    Stack (const Stack<T>& other) {
        this->dim = other.dim;
        this->top = other.top;
        this->container = new T[other.dim];
        for (int i = 0; i < other.dim; i++){
            this->container[i] = other.container[i];
        }
    }
    bool isEmpty() const {
        return top == 0;
    }
    void push (T elem) {
        if (top == dim){
            enlarge();
        }
        this.container[top] = elem;
        top++;
    }
    T pop () {
        if (dim == 0)
            throw runtime_error("pila vuota!");
        else {
            return this->container[--top];
        }
    }
    int size () const {
        return top;
    }
};
    
    