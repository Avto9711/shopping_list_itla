#include "Menu.h"


namespace GestorElementosVMeta{

    void Menu::init(){
        createScreen();
    }

    void Menu::createScreen(){
        system("CLS");

        int option;

        cout<<"Welcome to you new software to manage your food" <<endl;
        cout<<""<<endl;
        cout<<"Please, select an option of the menu "<<endl;
        cout<<"1. List articles"<<endl;
        cout<<"2. Add articles"<<endl;
        cout<<"3. Delete article "<<endl;
        cout<<"4. Quit"<<endl;
        cin>> option;

        if(option == 2){
            addArticleScreen();

        }else if(option == 1){
            listArticleScreen();
            cout<<"Press enter to go back"<< endl;
            cin.ignore();
            cin.get();
            createScreen();
        }else if(option == 3){
            listDeleteScreen();
            cout<< "Item deleted"<< endl;
            cout<<"Press enter to go back"<< endl;
            cin.ignore();
            cin.get();
            createScreen();
        }
    }

        void Menu::addArticleScreen(){


            string name;
            int quantity;
            cout<<"Introduce the name of the product: ";
            cin>> name;
            cout<<"Introduce the quantity: ";
            cin>>quantity;

            productList->add(new Element(name,quantity));
            cout<<"Article added"<< endl;

            cout<<"Press enter to go back"<< endl;
            cin.ignore();
            cin.get();
            createScreen();
        }
        void Menu::listArticleScreen(){
            productList->getAll();


        }

        void Menu::listDeleteScreen(){
            int number;
            listArticleScreen();
               cout <<"Select the number of the item you want to delete."<< endl;
               cin>> number;
               productList->deleteItem(number);


        }



}
