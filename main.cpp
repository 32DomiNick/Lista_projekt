// main.cpp
#include <iostream>
#include "fabryka.h"
#include "list.cpp" // Dolaczamy .cpp, bo uzywamy szablonow
#include "iterator.cpp"
#include "fabryka.cpp"

void testIterator(DoublyLinkedList<int>& list) {
    std::cout << "\n Test iteratora" << std::endl;
    Iterator<int> it = list.begin();

    std::cout << "Nastepny element: " << it.currentItem() << std::endl; // Wyswietl nastepny element
    it.next();
    std::cout << "Nastepny element: " << it.currentItem() << std::endl;
    it.next();
    std::cout << "Poprzedni element: ";
    it.prev(); // Cofamy sie
    std::cout << it.currentItem() << std::endl; // Wyswietl poprzedni element
}

int main() {
    // UUzycie fabryki do stworzenia listy
    DoublyLinkedList<int>* list = ListFactory<int>::createList();

    std::cout << "Dodawanie elementow" << std::endl;
    list->addToBack(10);  // Dodaj na koniec
    list->addToBack(20);
    list->addToBack(30);
    list->addToFront(5); // Dodaj na poczatek
    list->display(); // Oczekiwany wynik: 5 <-> 10 <-> 20 <-> 30 <-> nullptr

    std::cout << "\n Dodawanie pod index" << std::endl;
    list->addAtIndex(15, 2); // Dodaj pod wskazany indeks
    list->display(); // Oczekiwany wynik: 5 <-> 10 <-> 15 <-> 20 <-> 30 <-> nullptr

    std::cout << "\n Wyswietlanie listy" << std::endl;
    std::cout << "Normalne:   ";
    list->display(); // Wyswietl cala liste
    std::cout << "Odwrotne: ";
    list->displayReverse(); // Wyswietl liste w odwrotnej kolejnosci

    testIterator(*list);

    std::cout << "\n Usuwanie elementow" << std::endl;
    list->removeFromFront(); // Usun z poczatku
    std::cout << "Po usunieciu z pocz�tku: ";
    list->display();

    list->removeFromBack(); // Usun z konca
    std::cout << "Po usunieciu z tylu:  ";
    list->display();

    list->removeAtIndex(1); // Usun z pod wskazanego indeksu
    std::cout << "Po usunieciu z indexu numer 1: ";
    list->display();

    std::cout << "\n Czyszczenie listy" << std::endl;
    list->clear(); // Czyszczenie calej listy
    std::cout << "Lista po czyszczeniu: ";
    list->display();

    delete list; // Zwolnienie pamieci
    return 0;
}