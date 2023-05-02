//
// Created by Sergey on 18.04.2023.
//

#include "iostream"
#include "DequeArray.h"

using namespace std;


template<typename T> DequeArray<T>::DequeArray(int size) {
    arr = new T[size];
    top = 0;
    front = -1;
    capacity = size;

    cout << "Deque through array initialized.\n";
}

template<typename T> DequeArray<T>::~DequeArray() {
    delete[] arr;
    cout << "Deque through array deleted.\n";
}

template <typename T> void DequeArray<T>::pushToStart(T x) {
    if (isFull()) {
        cout << "Deque is full!";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting to start " << x << endl;
    if (front == -1) front = capacity - 1;
    arr[front--] = x;
}

template<typename T> void DequeArray<T>::pushToEnd(T x) {
    if (isFull()) {
        cout << "Deque is full!";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting to end " << x << endl;
    if (top == capacity)  top = 0;
    arr[top++] = x;
}

template<typename T> T DequeArray<T>::popFromTheStart() {
    if (isEmpty()) {
        cout << "Deque is empty!";
        exit(EXIT_FAILURE);
    }

    cout << "Removing from the start " << lower() << endl;
    if (front == capacity - 1)  front = -1;
    return arr[++front];
}

template<typename T> T DequeArray<T>::popFromTheEnd() {
    if (isEmpty()) {
        cout << "Deque is empty!";
        exit(EXIT_FAILURE);
    }

    cout << "Removing from the end " << upper() << endl;
    if (top == 0) top = capacity;
    return arr[--top];
}

template<class T> T DequeArray<T>::lower() { return arr[front + 1]; }

template<class T> T DequeArray<T>::upper() { return arr[top - 1]; }

template<class T> int DequeArray<T>::size() { return top > front ? top - front - 1 : (capacity - front) + top - 1; }

template<class T> bool DequeArray<T>::isEmpty() { return ((top - front) == 1 || (front - top) == 99); }

template<class T> bool DequeArray<T>::isFull() { return ((front - top) == 1 || (top - front) == 99); }