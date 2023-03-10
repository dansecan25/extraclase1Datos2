#include <iostream>
#include "projectFilesList/List.h"
#include "projectFilesList/Node.h"
using namespace std;
//include "projectFilesList/List.h"

char Menu(){
    char option = ' ' ;
    do {
        cout << "----Menu----" << endl;
        cout << "1. Add" << endl;
        cout << "2. Show" << endl;
        cout << "3. Find" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose: ";
        cin >> option;

        if((option<'1')or(option>'5')){
            system("cls");
            system("cls");
        }
    }while((option<'1') or (option>'5'));
    return option;
}
static Collector* collectorList;
int main() {
    char option = ' ';
    int Aux;
    List *List1=new List();
    Node* Temp;
    int num = 0;

    do{
        option=Menu();
        switch(option){
            case '1':
                Aux= 2;
                cout<<"Please type a number: ";
                cin>>num;
                List1 ->addNode(Aux);
                cout<<"Node completed...";
                break;

            case '2':
                Temp = List1->getHead();
                while(Temp!=NULL){
                    cout<<Temp->getData()<<", "<<endl;
                    Temp = Temp->getNext();
                }
                break;

            case '3':
                cout<<"Please type what you want to find: ";
                cin>>num;
                Temp = List1->findNode(num);
                if (Temp!=NULL){
                    cout<<num<<" exists in the list."<<endl;
                } else {
                    cout<<"The number couldn't be found.";
                }
                break;

            case '4':
                cout<<"Type the number you want to delete: ";
                cin>>num;
                Temp = List1->findNode(num);
                if (Temp!=NULL){
                    List1->deleteNode(num);
                    cout<<"The number was deleted...";
                } else {
                    cout<<"The number you want to delete doesn't exist";
                }
                break;

            case '5':
                cout<<"End of the run. \n See you later...";
                break;
        }
    }while(option!='5');



    return 0;
}
