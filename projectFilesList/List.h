//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_LIST_H
#define EXTRACLASE1DATOS2_LIST_H
#include "Node.h"
#include "Collector.h"
using namespace std;

class List {
private:
    Node *head;
public:
    List();
    void setHead(Node*);
    Node* getHead();
    Node* getLast();
    void addNode(int);
    void printList(Node *n);
    Node* findNode(int);
    void deleteNode(int);

};



#endif //EXTRACLASE1DATOS2_LIST_H
