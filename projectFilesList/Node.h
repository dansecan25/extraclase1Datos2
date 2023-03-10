//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_NODE_H
#define EXTRACLASE1DATOS2_NODE_H
#include <list>
#include <iostream>
using namespace std;
class Collector {
private:
    list<void*> recycledList;
public:
    Collector();
    void recycleMemory(void* memoryPtr);
    void* asignMemory(size_t size);
};
class Node {
private:
    static Collector* collectorList;

public:
    int data;
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
