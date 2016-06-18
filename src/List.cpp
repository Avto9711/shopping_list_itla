#include "List.h"


namespace GestorElementosVMeta{

    List::List(): _first(NULL), _last(NULL){}


     void List::add(Element* Element){

        if(_first == NULL){
            _first = Element;
            _last = Element;
        }else{
            _last->setNext(Element);
            _last = Element;
        }
     }

     void List::getAll(){
         int i=1;
         Element* element = _first;

        while(element!=NULL){
            cout<<i<<" - "<<element->getName()<< " ";
            cout<<element->getQuantity()<< endl;

            element = element->getNext();
            i++;
        }
     }

     void List::deleteItem(int number){
        int i=1;

         Element* element = _first;
         Element* element2 = NULL;
        while(element!=NULL){

            if(number == i){
                if(element == _first){
                    _first = element->getNext();
                    break;
                }
                element2->setNext(element->getNext());
                break;
            }else{
                element2= element;
                element = element->getNext();
                i++;
            }
        }
     }
}
