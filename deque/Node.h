//
// Created by Sergey on 18.04.2023.
//

#ifndef STRUCTURES_NODE_H
#define STRUCTURES_NODE_H


template<class T> class Node {
public:
    T val;
    Node<T> *next;
    Node<T> *previous;

    Node() : val(), next(nullptr), previous(nullptr) {}
    Node(T _val) : val(_val), next(nullptr), previous(nullptr) {}
};


#endif //STRUCTURES_NODE_H
