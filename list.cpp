// list.cpp
#include "list.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    clear();
}

template <typename T>
void DoublyLinkedList<T>::addToFront(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (!head) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

template <typename T>
void DoublyLinkedList<T>::addToBack(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (!tail) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

template <typename T>
void DoublyLinkedList<T>::addAtIndex(T data, int index) {
    if (index < 0 || index > size) {
        std::cerr << "Nie ma takiego indexu." << std::endl;
        return;
    }
    if (index == 0) {
        addToFront(data);
        return;
    }
    if (index == size) {
        addToBack(data);
        return;
    }

    Node<T>* current = head;
    for (int i = 0; i < index; ++i) {
        current = current->next;
    }

    Node<T>* newNode = new Node<T>(data);
    newNode->next = current;
    newNode->prev = current->prev;
    current->prev->next = newNode;
    current->prev = newNode;
    size++;
}

template <typename T>
void DoublyLinkedList<T>::removeFromFront() {
    if (!head) return;
    Node<T>* temp = head;
    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    size--;
}

template <typename T>
void DoublyLinkedList<T>::removeFromBack() {
    if (!tail) return;
    Node<T>* temp = tail;
    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    size--;
}

template <typename T>
void DoublyLinkedList<T>::removeAtIndex(int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Nie ma takiego indexu." << std::endl;
        return;
    }
    if (index == 0) {
        removeFromFront();
        return;
    }
    if (index == size - 1) {
        removeFromBack();
        return;
    }

    Node<T>* current = head;
    for (int i = 0; i < index; ++i) {
        current = current->next;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}

// blad 1

// blad 2
