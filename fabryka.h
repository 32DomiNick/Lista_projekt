// Fabryka.h
#pragma once
#include "list.h"

/**
 * @file fabryka.h
 * @brief Definicja klasy ListFactory, implementuj¹cej wzorzec fabryki.
 */

template <typename T>
class ListFactory {
public:
    /**
     * @brief Tworzy i zwraca now¹ instancjê listy dwukierunkowej.
     * @return WskaŸnik na nowo utworzon¹ listê.
     */
    static DoublyLinkedList<T>* createList();
};