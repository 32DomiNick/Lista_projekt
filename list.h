// list.h
#pragma once
#include "node.h"
#include "iterator.h"
#include <iostream>

/**
 * @file list.h
 * @brief Definicja klasy DoublyLinkedList, implementuj�cej list� dwukierunkow�.
 */

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head; // Wska�nik na pocz�tek listy
    Node<T>* tail; // Wska�nik na koniec listy
    int size;      // Rozmiar listy

public:
    /**
     * @brief Konstruktor domy�lny.
     */
    DoublyLinkedList();

    /**
     * @brief Destruktor, czy�ci pami��.
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