#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

bool found (node* lst, int n){
    if (lst == nullptr)
        return false;
    else {
        while (lst != nullptr){
            if (lst->data == n)
                return true;
            lst = lst->next;
        }
        return false;
    }
}

void add (node* &lst, int e){
    node* new_node = new node;
    if (lst == nullptr){
        new_node->data = e;
        new_node->next = nullptr;
        lst = new_node;
    } else {
        new_node->data = e;
        new_node->next = nullptr;
        node* cursor = lst;
        while (cursor->next != nullptr)
            cursor = cursor->next;
        cursor->next = new_node;
    }
}

node* unione (node* l1, node* l2){
    node* l3 = nullptr;
    if (l1 == nullptr && l2 == nullptr)
        return l3;
    if (l1 == nullptr){
        while (l2 != nullptr){
            if (!found(l3, l2->data))
                add(l3, l2->data);
            l2 = l2->next;
        }
        return l3;
    }
    if (l2 == nullptr){
        while (l1 != nullptr){
            if (!found (l3, l1->data))
                add(l3, l1->data);
            l1 = l1->next;
        }
        return l3;
    }
    while (l1 != nullptr){
        if (!found(l3, l1->data))
            add(l3, l1->data);
        l1 = l1->next;
    }
    while (l2 != nullptr){
        if (!found(l3, l2->data))
            add(l3, l2->data);
        l2 = l2->next;
    }
    return l3;
}