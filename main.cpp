// main.cpp
#include <iostream>
#include "fabryka.h"
#include "list.cpp" // Do³¹czamy .cpp, bo u¿ywamy szablonów
#include "iterator.cpp"
#include "fabryka.cpp"

void testIterator(DoublyLinkedList<int>& list) {
    std::cout << "\n Test iteratora" << std::endl;
    Iterator<int> it = list.begin();

    std::cout << "Nastepny element: " << it.currentItem() << std::endl; // Wyœwietl nastêpny element
    it.next();
    std::cout << "Nastepny element: " << it.currentItem() << std::endl;
    it.next();
    std::cout << "Poprzedni element: ";
    it.prev(); // Cofamy siê
    std::cout << it.currentItem() << std::endl; // Wyœwietl poprzedni element
}

int main() {
    // U¿ycie fabryki do stworzenia listy
    DoublyLinkedList<int>* list = ListFactory<int>::createList();

    std::cout << "Dodawanie elementow" << std::endl;
    list->addToBack(10);  // Dodaj na koniec
    list->addToBack(20);
    list->addToBack(30);
    list->addToFront(5); // Dodaj na pocz¹tek
    list->display(); // Oczekiwany wynik: 5 <-> 10 <-> 20 <-> 30 <-> nullptr

    std::cout << "\n Dodawanie pod index" << std::endl;
    list->addAtIndex(15, 2); // Dodaj pod wskazany indeks
    list->display(); // Oczekiwany wynik: 5 <-> 10 <-> 15 <-> 20 <-> 30 <-> nullptr

    std::cout << "\n Wyswietlanie listy" << std::endl;
    std::cout << "Normalne:   ";
    list->display(); // Wyœwietl ca³¹ listê
    std::cout << "Odwrotne: ";
    list->displayReverse(); // Wyœwietl listê w odwrotnej kolejnoœci

    testIterator(*list);

    std::cout << "\n Usuwanie elementow" << std::endl;
    list->removeFromFront(); // Usuñ z pocz¹tku
    std::cout << "Po usunieciu z pocz¹tku: ";
    list->display();

    list->removeFromBack(); // Usuñ z koñca
    std::cout << "Po usuniêciu z ty³u:  ";
    list->display();

    list->removeAtIndex(1); // Usuñ z pod wskazanego indeksu
    std::cout << "Po usuniêciu z indexu numer 1: ";
    list->display();

    std::cout << "\n Czyszczenie listy" << std::endl;
    list->clear(); // Czyœæ ca³¹ listê
    std::cout << "Lista po czyszczeniu: ";
    list->display();

    delete list; // Zwolnienie pamiêci
    return 0;
}