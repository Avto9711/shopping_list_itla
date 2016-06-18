#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "Element.h"

namespace GestorElementosVMeta{
    class List{

    private:
        Element* _first;
        Element* _last;
    public:
      List();
      void getAll();
      void deleteItem(int number);
      Element* getFirst(){
          return _first;
      }

        void add(Element* Element);
    };

}


#endif // LIST_H_INCLUDED
