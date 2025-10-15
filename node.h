// Node.h
#pragma once // Zabezpiecza przed wielokrotnym do��czaniem tego samego pliku

/**
 * @file Node.h
 * @brief Definicja klasy Node, reprezentuj�cej pojedynczy w�ze� listy dwukierunkowej.
 */

template <typename T>
class Node {
public:
    T data;         // Dane przechowywane w w�le
    Node<T>* next;  // Wska�nik na nast�pny w�ze�
    Node<T>* prev;  // Wska�nik na poprzedni w�ze�

    /**
     * @brief Konstruktor tworz�cy nowy w�ze�.
     * @param data Warto�� do przechowania w w�le.
     */
    Node(T data) : data(data), next(nullptr), prev(nullptr) {}
};