#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

namespace GestorElementosVMeta{

    class Element{
    public:
        std::string getName(){
            return _name;
        }
        int getQuantity(){
            return _quantity;
        }


        void setNext(Element* next){
            _next = next;
        }

        Element* getNext(){
            return _next;
        }

        Element(std::string name, int quantity);



    private:
        std::string _name;
        int _quantity;
        Element* _next;

    };

}

#endif // ELEMENT_H_INCLUDED
