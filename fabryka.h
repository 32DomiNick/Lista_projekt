// Fabryka.h
#pragma once
#include "list.h"

/**
 * @file fabryka.h
 * @brief Definicja klasy ListFactory, implementuj�cej wzorzec fabryki.
 */

template <typename T>
class ListFactory {
public:
    /**
     * @brief Tworzy i zwraca now� instancj� listy dwukierunkowej.
     * @return Wska�nik na nowo utworzon� list�.
     */
    static DoublyLinkedList<T>* createList();
};