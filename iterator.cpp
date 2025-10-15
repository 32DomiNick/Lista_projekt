// Iterator.cpp
#include "iterator.h"

template <typename T>
Iterator<T>::Iterator(Node<T>* node) : currentNode(node) {}

template <typename T>
Iterator<T>& Iterator<T>::next() {
    if (currentNode) {
        currentNode = currentNode->next;
    }
    return *this;
}

template <typename T>
Iterator<T>& Iterator<T>::prev() {
    if (currentNode) {
        currentNode = currentNode->prev;
    }
    return *this;
}

template <typename T>
T Iterator<T>::currentItem() {
    return currentNode->data;
}

template <typename T>
bool Iterator<T>::isDone() {
    return currentNode == nullptr;
}

// Jawne utworzenie instancji szablonu 
template class Iterator<int>;
template class Iterator<double>;
template class Iterator<char>;