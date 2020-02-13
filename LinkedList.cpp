#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->count = 0;
}

void LinkedList::addFront(int payload)
{
    Node* n = new Node(payload);  //Node n = new Node(payload); in Java

    if(!this->head) //Tests the pointer count of this -> head, boils down to 0 if nothing points here
    {
        this->head = n;
    }
    else //if list has at least one thing in it
    {
        n->setNextNode(this->head);
        this->head = n;
    }
    this->count++;
}

int LinkedList::getFront()
{
    return this->head->getPayload(); //pointer, Node that lives at the frond of the list
}

int LinkedList::removeFront()
{
    Node* nodeToReturn = this->head;
    this->head = this->head->getNextNode();
    int val = nodeToReturn->getPayload();
    delete nodeToReturn;
    this->count--;
    return val;
}

void LinkedList::addEnd(int payload) //assuming there is at least one node
{

    Node* n  = new Node(payload);
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        
        if(i+1<this->count)
        {
            std::cout << "Loop TIME" << currNode->getPayload() << "\n" ;
            currNode = currNode->getNextNode();
            
        }
        else
        {
            std::cout << "LAST TIME" <<currNode->getPayload() << "\n" ;
            currNode->setNextNode(n);
        }        
    }   
count += 1;
}

int LinkedList::getEnd()
{
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        if(i+1<this->count)
        {
            currNode = currNode->getNextNode();
        }
        else
        {
          return currNode->getPayload();
        }       
    }
}

int LinkedList::removeEnd()
{
    int returnValue = LinkedList::getEnd();
    

    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        if(i+2<this->count)
        {
            currNode = currNode->getNextNode();
        }
        else
        {
            currNode->setNextNode(NULL);
            count-=1;
            return returnValue;
        }       
    }
   
}
    
void LinkedList::display()
{
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        std::cout << currNode->getPayload() << "\n";
        currNode = currNode->getNextNode();
    }
}





