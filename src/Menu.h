#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "List.h"

namespace GestorElementosVMeta{


    class Menu{
        public:
        List* productList = new List();

        void init();

        private:
        void createScreen();
        void addArticleScreen();
        void listArticleScreen();
        void listDeleteScreen();


    };

}


#endif // MENU_H_INCLUDED
