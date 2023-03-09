//
// Created by dansecan on 25/02/23.
//

#include "Collector.h"

Collector::Collector() {
    cout<<"collector started"<<endl;
}

void Collector::recycleMemory(void *memoryPtr) {
    recycledList.push_back(memoryPtr);
}
void* Collector::asignMemory(size_t size) {
    if(recycledList.empty()){ //if there is no recycled memories on the list
        return ::operator new(size);
    } else{
        void* freeMemoryPtr=recycledList.front();
        recycledList.pop_front();
        return freeMemoryPtr;
    }
}
