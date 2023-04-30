//
// Created by Sergey on 18.04.2023.
//

#include "iostream"
#ifndef STRUCTURES_STACK_H
#define STRUCTURES_STACK_H

#define SIZE 100

using namespace std;

template<typename T> class Stack {
    T *arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE);
    ~Stack();

    void push(T i);
    T pop();
    T peek();
    int size();
    bool isEmpty();
    bool isFull();
};


#endif //STRUCTURES_STACK_H
