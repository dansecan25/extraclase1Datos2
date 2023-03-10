//
// Created by dansecan on 25/02/23.
//
using namespace std;
#include "List.h"
//code from https://www.youtube.com/watch?v=s0epWjA3CvE

List::List() {
    head = NULL;
    collectorList=new Collector();
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

void List::addNode (int data){
    Node *n=new Node(data,collectorList);
    if (getHead() == NULL)
    {
        setHead(n);
    }
    else
    {
        getLast()->editNode(n);
    }
}

void List::printList(Node *n){

    if (n != NULL)
    {
        cout << "We have: " << n->data <<endl;
        this->printList(n->next);
    }
}

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

Node* List::findNode(int data){
    Node *find =  getHead();
    while((find != NULL) and (find->getData()!=data)){
        find = find->getNext();
    }
    return find;
}



