//
// Created by dansecan on 25/02/23.
//

#include "Collector.h"
/**
 * constructor class for the collector
 */
Collector::Collector() {
    cout<<"collector started"<<endl;
}
/**
 * recyles memory by pushing the pointer of the deleted node into the list
 * @param memoryPtr
 */
void Collector::recycleMemory(void *memoryPtr) {
    recycledList.push_back(memoryPtr);
}
/**
 * asigns a memory pointer to a node as solicited when calling this function by giving a memory pointer from the list or a default memory block
 * @param size
 * @return
 */
void* Collector::asignMemory(size_t size) {
    if(recycledList.empty()){ //if there is no recycled memories on the list
        return ::operator new(size);
    } else{
        void* freeMemoryPtr=recycledList.front();
        recycledList.pop_front();
        return freeMemoryPtr;
    }
}
