//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_COLLECTOR_H
#define EXTRACLASE1DATOS2_COLLECTOR_H
#include "Node.h"
#include <iostream>
#include <list>

class Collector {
private:
    list<void*> recycledList;
public:
    Collector();
    void recycleMemory(void* memoryPtr);
    void* asignMemory(size_t size);
};


#endif //EXTRACLASE1DATOS2_COLLECTOR_H
