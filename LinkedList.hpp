#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList
{
private:
    Node* Head;
    int count;

public:
    void addFront();
    void addEnd();
    void addAtIndex();
};
#endif /* LinkedList_hpp */