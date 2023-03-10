//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_COLLECTOR_H
#define EXTRACLASE1DATOS2_COLLECTOR_H
#include <iostream>
#include <list>

using namespace std;
class Collector {
private:
    list<void*> recycledList;
    static Collector* instance;
    Collector();
public:
    static Collector* getInstance();
    void recycleMemory(void* memoryPtr);
    void* asignMemory(size_t size);
};


#endif //EXTRACLASE1DATOS2_COLLECTOR_H
