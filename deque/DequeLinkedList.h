//
// Created by Sergey on 18.04.2023.
//

#ifndef STRUCTURES_DEQUELINKEDLIST_H
#define STRUCTURES_DEQUELINKEDLIST_H
#include "Node.h"


template<class T> class DequeLinkedList: public Node<T> {
    Node<T> *first;
    Node<T> *last;

public:
    DequeLinkedList() : first(nullptr), last(nullptr) {}

    void pushToStart(T x);
    void pushToEnd(T x);
    T popFromTheStart();
    T popFromTheEnd();
    T lower();
    T upper();
    int size();
    bool isEmpty();
};


#endif //STRUCTURES_DEQUELINKEDLIST_H