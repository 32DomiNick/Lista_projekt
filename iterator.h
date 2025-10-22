// Iterator.h
#pragma once
#include "node.h"

/**
 * @file iterator.h
 * @brief Definicja klasy Iterator do przechodzenia po liœcie.
 */

template <typename T>
class Iterator {
private:
    Node<T>* currentNode; // WskaŸnik na aktualny wêze³

public:
    /**
     * @brief Konstruktor iteratora.
     * @param node Wêze³, na który ma wskazywaæ iterator.
     */
    Iterator(Node<T>* node);

    /**
     * @brief Przesuwa iterator do nastêpnego elementu.
     * @return Referencja do iteratora po przesuniêciu.
     */
    Iterator<T>& next();

    /**cd ..
     * @brief Przesuwa iterator do poprzedniego elementu.
     * @return Referencja do iteratora po przesuniêciu.
     */
    Iterator<T>& prev();

    /**
     * @brief Zwraca dane z aktualnego wêz³a.
     * @return Dane typu T.
     */
    T currentItem();

    /**
     * @brief Sprawdza, czy iterator zakoñczy³ przechodzenie po liœcie.
     * @return True, jeœli iterator wskazuje na nullptr.
     */
    bool isDone();
};