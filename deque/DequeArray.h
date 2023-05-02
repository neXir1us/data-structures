//
// Created by Sergey on 18.04.2023.
//

#ifndef STRUCTURES_DEQUEARRAY_H
#define STRUCTURES_DEQUEARRAY_H

#define SIZE 100


template<typename T> class DequeArray {
    T *arr;
    int top;
    int front;
    int capacity;
public:
    DequeArray(int size = SIZE);
    ~DequeArray();

    void pushToStart(T x);
    void pushToEnd(T x);
    T popFromTheStart();
    T popFromTheEnd();
    T lower();
    T upper();
    int size();
    bool isEmpty();
    bool isFull();
};


#endif //STRUCTURES_DEQUEARRAY_H
