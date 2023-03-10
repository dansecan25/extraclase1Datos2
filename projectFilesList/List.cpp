//
// Created by dansecan on 25/02/23.
//
using namespace std;
#include "List.h"
//code from https://www.youtube.com/watch?v=s0epWjA3CvE

List::List() {
    head = NULL;
}

void List::setHead(Node *H) {
    head = H;
}

Node* List::getHead() {
    return head;
}

Node* List::getLast() {
    Node *last = getHead();
    while(last->getNext()!=NULL){
        last = last->getNext();
    }
    return last;
}

void List::addNode (Node *new){
    if (getHead() == NULL)
    {
        setHead(new);
    }
    else
    {
        getLast()->editNode(new);
    }
}

void printList(Node *n)
{
    if (n != NULL)
    {
        cout << "We have: " << n->data <<endl;
        this->printList(n->next);
    }
}

void List::deleteNode(int data){
    Node *find = getHead();
    Node *before=NULL;
    if(find -> getnum()==data){
        setHead(getHead()->getNext());
    } else {
        while((find!=NULL) and (find->getnum()!=data)){
            before=find;
            find=find->getNext();
        }
        if (find!=NULL){
            before->setNext(find->getNext());
        }
    }
    delete find;
}

Node* List::findNode(int data){
    Node *find =  getHead();
    while((find != NULL) and (find->getnum()!=data)){
        find = find->getNext();
    }
    return find;
}



