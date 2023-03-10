//
// Created by dansecan on 25/02/23.
//
using namespace std;
#include "List.h"

/**
 * constructor to create a list
 */
List::List() {
    head = NULL;
}
/**
 * Sets the head of the list
 * @param H
 */
void List::setHead(Node *H) {
    head = H;
}
/**
 * Returns the head of the list
 * @return
 */
Node* List::getHead() {
    return head;
}
/**
 * Returns the last node of the list
 * @return
 */
Node* List::getLast() {
    Node *last = getHead();
    while(last->getNext()!=NULL){
        last = last->getNext();
    }
    return last;
}
/**
 * Adds a new node to the list
 * @param data
 */
void List::addNode (int data){
    Node *n=new Node(data);
    if (getHead() == NULL)
    {
        setHead(n);
    }
    else
    {
        getLast()->editNode(n);
    }
}
/**
 * Prints the list with all of its nodes
 * @param n
 */
void List::printList(Node *n){

    if (n != NULL)
    {
        cout << "We have: " << n->data <<endl;
        this->printList(n->next);
    }
}
/**
 * Deletes a node from the list
 * @param data
 */
void List::deleteNode(int data){
    Node *find = getHead();
    Node *before=NULL;
    if(find -> getData()==data){
        setHead(getHead()->getNext());
    } else {
        while((find!=NULL) and (find->getData()!=data)){
            before=find;
            find=find->getNext();
        }
        if (find!=NULL){
            before->editNode(find->getNext());
        }
    }
    delete find;
}
/**
 * Looks if a determined node exists in the list
 * @param data
 * @return
 */
Node* List::findNode(int data){
    Node *find =  getHead();
    while((find != NULL) and (find->getData()!=data)){
        find = find->getNext();
    }
    return find;
}



