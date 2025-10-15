// Node.h
#pragma once // Zabezpiecza przed wielokrotnym do³¹czaniem tego samego pliku

/**
 * @file Node.h
 * @brief Definicja klasy Node, reprezentuj¹cej pojedynczy wêze³ listy dwukierunkowej.
 */

template <typename T>
class Node {
public:
    T data;         // Dane przechowywane w wêŸle
    Node<T>* next;  // WskaŸnik na nastêpny wêze³
    Node<T>* prev;  // WskaŸnik na poprzedni wêze³

    /**
     * @brief Konstruktor tworz¹cy nowy wêze³.
     * @param data Wartoœæ do przechowania w wêŸle.
     */
    Node(T data) : data(data), next(nullptr), prev(nullptr) {}
};