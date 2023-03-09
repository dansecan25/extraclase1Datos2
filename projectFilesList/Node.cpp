//
// Created by dansecan on 25/02/23.
//

#include <cstring>
#include "Node.h"
/**
 * constructor to create a node
 */
Node::Node() {
    data=0;
    next=NULL;
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
void* Node::operator new(size_t size){
    return collectorList->asignMemory(size);
    //check if in  collector there is a recycled pointer that it can use to recyle a memory space to use or use the
    //global new operator to assign memory
}
void Node::operator delete(void* nodeToDelete){
    //add the pointer to the collector list
    collectorList->recycleMemory(nodeToDelete);

}