#include "Node.hpp"

Node::Node(int payload)
{
    this->payload = payload;
    //this-> means the actual value of the payload
}

int Node::getPayload()
{
    return this->payload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}