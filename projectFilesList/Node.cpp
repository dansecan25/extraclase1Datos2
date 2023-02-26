//
// Created by dansecan on 25/02/23.
//

#include <cstring>
#include "Node.h"
/**
 * insert new head node
 * @param dat
 */
void Node::insertNode(int dat) {
    newNode= new node();
    newNode->data=dat;
    newNode->prev=NULL;
    newNode->next=NULL;
}
/**
 * Insert new node inside the list
 * @param dat
 * @param previousNode
 * @param nextNode
 */
void Node::insertNode(int dat, node* previousNode, node* nextNode) {
    newNode= new node();
    newNode->data=dat;
    newNode->prev=previousNode;
    newNode->next=nextNode;
}
/**
 * edits pointers of node
 * @param previousNode
 * @param nextNode
 */
void Node::editNode(node* previousNode, node* nextNode){
    newNode->prev=previousNode;
    newNode->next=nextNode;
}
/**
 * Edits data on a pointer
 * @param dat
 */
void Node::editNode(int dat){
    newNode->data=dat;
}