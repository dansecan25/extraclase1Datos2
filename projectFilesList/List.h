//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_LIST_H
#define EXTRACLASE1DATOS2_LIST_H
#include "Node.h"
using namespace std;

class List {
private:
    Node *head;
public:
    List();

    void setHead(Node*);
    Node* getHead();
    Node* getLast();
    void addNode(Node*);
    Node* findNode(int);
    void deleteNode(int);

};



#endif //EXTRACLASE1DATOS2_LIST_H
