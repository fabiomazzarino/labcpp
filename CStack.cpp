#include "CStack.h"

template<class T>
CStack<T>::~CStack() {
    while (topnode) {
        CNode *delnode = topnode;
        topnode = topnode->prev;
        delete delnode;
    }
}

template<class T>
void CStack<T>::push(T adata) {
    CNode *newnode = new CNode(adata, topnode);
    topnode = newnode;
    size++;
}

template<class T>
T CStack<T>::pop() {
    if (!topnode)
        return T();
    T data = topnode->data;
    CNode *delnode = topnode;
    topnode = topnode->prev;
    delete delnode;
    size--;
    return data;
}

template<class T>
T CStack<T>::top() {
    if (!topnode)
        return T();
    return topnode->data;
}

template<class T>
unsigned CStack<T>::getSize() {
    return size;
}
