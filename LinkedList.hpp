#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList 
{
private:
    Node* head;
    int count;
    
public:
    LinkedList();
    void addFront(int payload);
    void display();
    int getFront();
    int removeFront();
    //homework
    void addEnd(int payload);
    int getEnd();
    int removeEnd();

    
};
#endif /* LinkedList_hpp */
