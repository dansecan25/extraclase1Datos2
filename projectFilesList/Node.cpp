//
// Created by dansecan on 25/02/23.
//

#include <cstring>
#include "Node.h"
void Node::insertNode(int dat) {
    newNode= new node();
    newNode->data=dat;
    newNode->prev=NULL;
    newNode->next=NULL;
}
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
void Node::editNode(int dat){
    newNode->data=dat;
}