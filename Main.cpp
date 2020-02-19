#include "LinkedList.hpp"
#include <iostream>
#include <ctime>

int main()
{
    LinkedList* ll = new LinkedList(); //some change
    /*
    ll->addFront(5);
    ll->addFront(4);
    ll->addFront(3);
    ll->addFront(2);
    ll->addFront(1);
    ll->addFront(0);
    ll->display();
    ll->displayPointers();
    //ll->add  Index(9999,3);
    //ll->display();
    //std::cout << "\n" << ll->removeIndex(0) <<"\n";
    std::cout << "\n" << ll->removeIndex(4) <<"\n"<<"\n";
    ll->display();
    
    /*std::srand(std::time(nullptr));
    for (int i = 0; i<20;i++)
    {   
        ll->addEnd
    }
    */
   /*ll->addFront(1);
   ll->addFront(3);
   ll->addFront(4);
   ll->addFront(0);*/
   ll->addFront(0);
   ll->addFront(2);
   ll->addFront(1000);

   ll->display(); 
   
   std::cout << "-----------------------"<<"\n";
   ll->sort();
   std::cout <<"------------"<< "\n";
   ll->display();
    
    delete ll;
}