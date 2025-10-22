// list.h
#pragma once
#include "node.h"
#include "iterator.h"
#include <iostream>

/**
 * @file list.h
 * @brief Definicja klasy DoublyLinkedList, implementuj¹cej listê dwukierunkow¹.
 */

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head; // WskaŸnik na pocz¹tek listy
    Node<T>* tail; // WskaŸnik na koniec listy
    int size;      // Rozmiar listy

public:
    /**
     * @brief Konstruktor domyœlny.
     */
    DoublyLinkedList();

    /**
     * @brief Destruktor, czyœci pamiêæ.
     */
    ~DoublyLinkedList();

    // --- Metody z zadania ---
    void addToFront(T data);
    void addToBack(T data);
    void addAtIndex(T data, int index);
    void removeFromFront();
    void removeFromBack();
    void removeAtIndex(int index);
    void display();
    void displayReverse();
    void clear();

    // --- Metody dla iteratora ---
    Iterator<T> begin();
    Iterator<T> end();
};