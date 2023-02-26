//
// Created by dansecan on 25/02/23.
//

#ifndef EXTRACLASE1DATOS2_NODE_H
#define EXTRACLASE1DATOS2_NODE_H
using namespace std;

class Node {
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
node* newNode;
public:
    void insertNode(int dat);
    void insertNode(int dat, node* previousNode, node* nextNode);
    void editNode(node* previousNode, node* nextNode);
    void editNode(int dat);
};


#endif //EXTRACLASE1DATOS2_NODE_H
