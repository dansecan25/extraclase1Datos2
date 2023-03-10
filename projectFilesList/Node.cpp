//
// Created by dansecan on 25/02/23.
//

#include <cstring>
#include "Node.h"
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
/**
 * constructor to create a node
 */
Node::Node() {
    data=0;
    next=NULL;
    collectorList=new Collector();
}
/**
 * Constructor to create a node with data
 * @param dat
 */
Node::Node(int dat,Collector* collectClass){
    this->data=dat;
    this->next=NULL;
    this->collectorList=collectClass;
}

/**
 * Edits the nodes data
 * @param dat
 */
void Node::editNode(int dat) {
    this->data=dat;
}
/**
 * edits the node next pointer
 * @param newNext
 */
void Node::editNode(Node *newNext) {
    this->next=newNext;
}
/**
 * returns the nodes data
 * @return
 */
int Node::getData() {
    return data;
}
/**
 * Returns the next node pointer
 * @return
 */
Node* Node::getNext() {
    return next;
}
/**
 * Overloads new operator to asign recycled memory
 * @param size
 * @return
 */
void* Node::operator new(size_t size){
    return collectorList->asignMemory(size);
    //check if in  collector there is a recycled pointer that it can use to recyle a memory space to use or use the
    //global new operator to assign memory
}
/**
 * overloades delete operator to recyle memory
 * @param nodeToDelete
 */
void Node::operator delete(void* nodeToDelete){
    //add the pointer to the collector list
    collectorList->recycleMemory(nodeToDelete);

}