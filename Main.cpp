#include "LinkedList.hpp"
#include <iostream>

int main()
{
    LinkedList* ll = new LinkedList(); //some change
    ll->addFront(1);
    ll->addFront(2);
    ll->addFront(3);
    ll->display();
    ll->addEnd(9999);
    //std::cout <<  << "\n";
    ll->display();
    std::cout << ll->getEnd() <<"\n";
    std::cout << ll ->removeEnd() << "\n";
    ll->display();
    delete ll;
}