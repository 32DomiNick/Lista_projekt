// main.cpp
#include <iostream>
#include "fabryka.h"
#include "list.cpp" // Do��czamy .cpp, bo u�ywamy szablon�w
#include "iterator.cpp"
#include "fabryka.cpp"

void testIterator(DoublyLinkedList<int>& list) {
    std::cout << "\n Test iteratora" << std::endl;
    Iterator<int> it = list.begin();

    std::cout << "Nastepny element: " << it.currentItem() << std::endl; // Wy�wietl nast�pny element
    it.next();
    std::cout << "Nastepny element: " << it.currentItem() << std::endl;
    it.next();
    std::cout << "Poprzedni element: ";
    it.prev(); // Cofamy si�
    std::cout << it.currentItem() << std::endl; // Wy�wietl poprzedni element
}

int main() {
    // U�ycie fabryki do stworzenia listy
    DoublyLinkedList<int>* list = ListFactory<int>::createList();

    std::cout << "Dodawanie elementow" << std::endl;
    list->addToBack(10);  // Dodaj na koniec
    list->addToBack(20);
    list->addToBack(30);
    list->addToFront(5); // Dodaj na pocz�tek
    list->display(); // Oczekiwany wynik: 5 <-> 10 <-> 20 <-> 30 <-> nullptr

    std::cout << "\n Dodawanie pod index" << std::endl;
    list->addAtIndex(15, 2); // Dodaj pod wskazany indeks
    list->display(); // Oczekiwany wynik: 5 <-> 10 <-> 15 <-> 20 <-> 30 <-> nullptr

    std::cout << "\n Wyswietlanie listy" << std::endl;
    std::cout << "Normalne:   ";
    list->display(); // Wy�wietl ca�� list�
    std::cout << "Odwrotne: ";
    list->displayReverse(); // Wy�wietl list� w odwrotnej kolejno�ci

    testIterator(*list);

    std::cout << "\n Usuwanie elementow" << std::endl;
    list->removeFromFront(); // Usu� z pocz�tku
    std::cout << "Po usunieciu z pocz�tku: ";
    list->display();

    list->removeFromBack(); // Usu� z ko�ca
    std::cout << "Po usuni�ciu z ty�u:  ";
    list->display();

    list->removeAtIndex(1); // Usu� z pod wskazanego indeksu
    std::cout << "Po usuni�ciu z indexu numer 1: ";
    list->display();

    std::cout << "\n Czyszczenie listy" << std::endl;
    list->clear(); // Czy�� ca�� list�
    std::cout << "Lista po czyszczeniu: ";
    list->display();

    delete list; // Zwolnienie pami�ci
    return 0;
}