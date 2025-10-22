// fabryka.cpp
#include "fabryka.h"

template <typename T>
DoublyLinkedList<T>* ListFactory<T>::createList() {
    return new DoublyLinkedList<T>();
}

// Jawne utworzenie instancji szablonu
template class ListFactory<int>;
template class ListFactory<double>;
template class ListFactory<char>;