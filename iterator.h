// Iterator.h
#pragma once
#include "node.h"

/**
 * @file iterator.h
 * @brief Definicja klasy Iterator do przechodzenia po li�cie.
 */

template <typename T>
class Iterator {
private:
    Node<T>* currentNode; // Wska�nik na aktualny w�ze�

public:
    /**
     * @brief Konstruktor iteratora.
     * @param node W�ze�, na kt�ry ma wskazywa� iterator.
     */
    Iterator(Node<T>* node);

    /**
     * @brief Przesuwa iterator do nast�pnego elementu.
     * @return Referencja do iteratora po przesuni�ciu.
     */
    Iterator<T>& next();

    /**cd ..
     * @brief Przesuwa iterator do poprzedniego elementu.
     * @return Referencja do iteratora po przesuni�ciu.
     */
    Iterator<T>& prev();

    /**
     * @brief Zwraca dane z aktualnego w�z�a.
     * @return Dane typu T.
     */
    T currentItem();

    /**
     * @brief Sprawdza, czy iterator zako�czy� przechodzenie po li�cie.
     * @return True, je�li iterator wskazuje na nullptr.
     */
    bool isDone();
};