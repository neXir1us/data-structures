//
// Created by Sergey on 18.04.2023.
//

#include <iostream>
#include "Stack.h"

using namespace std;


template <typename T> Stack<T>::Stack(int size) {
    arr = new T[size];
    capacity = size;
    top = -1;

    cout << "Stack initialized.\n";
}

template <typename T> Stack<T>::~Stack() {
    delete[] arr;
    cout << "Stack deleted.\n";
}

template <typename T> void Stack<T>::push(T x) {
    if (isFull()) {
        cout << "Stack is full!";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << x << endl;
    arr[++top] = x;
}

template <typename T> T Stack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack is empty!";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << peek() << endl;
    return arr[top--];
}

template <typename T> T Stack<T>::peek() {
    if (!isEmpty()) return arr[top];
    else exit(EXIT_FAILURE);
}

template <typename T> int Stack<T>::size() { return top + 1; }

template <typename T> bool Stack<T>::isEmpty() { return top == -1; }

template <typename T> bool Stack<T>::isFull() { return top == capacity - 1; }
