//
// Created by Sergey on 18.04.2023.
//

#include <iostream>
#include "DequeLinkedList.h"
#include "MyException.h"

using namespace std;


template<class T> void DequeLinkedList<T>::pushToStart(T _val) {
    Node<T> *p = new Node(_val);

    if (isEmpty()) {
        first = p;
        last = p;

        cout << "First node added with value: " << _val << ".\n";
        return;
    }

    p->next = first;
    first->previous = p;
    first = p;

    cout << "Inserting to start: " << _val << ".\n";
}

template<class T> void DequeLinkedList<T>::pushToEnd(T _val) {
    Node<T> *p = new Node(_val);

    if (isEmpty()) {
        first = p;
        last = p;

        cout << "First node added with value: " << _val << ".\n";
        return;
    }

    last->next = p;
    p->previous = last;
    last = p;

    cout << "Inserting to end: " << _val << ".\n";
}

template<class T> T DequeLinkedList<T>::popFromTheStart() {
    if (isEmpty()) throw MyException("Deque is empty! You can't remove a node from an empty deque!\n");
    if (first->next == nullptr && last->previous == nullptr) {
        first = nullptr;
        cout << "Removing: " << last->val << ".\n";
        throw MyException("Removing last node! Deque is empty!\n");
    }

    Node<T> *p = first;
    first = p->next;
    T val = p->val;
    first->previous = nullptr;

    delete p;

    cout << "Removing from the start: " << val << ".\n";
    return val;
}

template<class T> T DequeLinkedList<T>::popFromTheEnd() {
    if (isEmpty()) throw MyException("Deque is empty! You can't remove a node from an empty deque!\n");
    if (first->next == nullptr && last->previous == nullptr) {
        first = nullptr;
        cout << "Removing: " << last->val << ".\n";
        throw MyException("Removing last node! Deque is empty!\n");
    }

    Node<T> *p = last;
    last = p->previous;
    T val = p->val;
    last->next = nullptr;

    delete p;

    cout << "Removing from the end: " << val << ".\n";
    return val;
}

template<class T> T DequeLinkedList<T>::lower() {
    if (!isEmpty()) {
        cout << "The bottom element is " << first->val << ".\n";
        return first->val;
    } else throw MyException("Deque is empty! You can't print the value of a node from an empty deque!\n");
}

template<class T> T DequeLinkedList<T>::upper() {
    if (!isEmpty()) {
        cout << "The top element is " << last->val << ".\n";
        return last->val;
    } else throw MyException("Deque is empty! You can't print the value of a node from an empty deque!\n");
}

template<class T> int DequeLinkedList<T>::size() {
    if (isEmpty()) {
        cout << "Deque is empty!\n";
        return 0;
    }

    int count = 0;

    Node<T> *p = first;
    while (p != last) {
        p = p->next;
        count++;
    }
    count++;

    cout << "The deque size is " << count << ".\n";
    return count;
}

template<class T> bool DequeLinkedList<T>::isEmpty() { return first == nullptr; }