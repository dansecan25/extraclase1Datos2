//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_NODE_H
#define EXTRACLASE1DATOS2_NODE_H
#include "Collector.h"
using namespace std;

class Node {

public:
    int data;
    static Collector* collectorList;
    Node* next;
    Node();
    Node(int dat,Collector* collectClass);
    void editNode(int dat);
    void editNode(Node* newNext);
    int getData();
    Node* getNext();
    void* operator new(size_t size);
    void operator delete(void*);
};


#endif //EXTRACLASE1DATOS2_NODE_H
