#include <iostream>

#include "DequeArray.h"
#include "DequeArray.cpp"
#include "DequeLinkedList.h"
#include "DequeLinkedList.cpp"

#include "FunctionSelection.h"
#include "FunctionSelection.cpp"

using namespace std;


int main() {

    FunctionSelection<string> newCheck;
    newCheck.check();



    DequeArray<int> deque1;

    deque1.pushToEnd(0);
    deque1.pushToStart(0);
    deque1.pushToEnd(1);
    deque1.pushToStart(1);
    deque1.pushToEnd(2);
    deque1.pushToStart(2);

    cout << "The top element is " << deque1.upper() << ".\nThe deque size is " << deque1.size() << "." << endl;

    deque1.popFromTheEnd();
    cout << "The top element is " << deque1.upper() << endl;

    deque1.popFromTheStart();
    cout << "The top element is " << deque1.lower() << endl;

    cout << "The deque size is " << deque1.size() << endl;

    if (deque1.isEmpty()) cout << "The deque is empty.\n";
    else cout << "The deque is not empty.\n";

    cout << "\n\n\n";


    DequeArray<string> deque2;

    deque2.pushToEnd("Hi");
    deque2.pushToStart("Hi");
    deque2.pushToEnd("I'm");
    deque2.pushToStart("I'm");
    deque2.pushToEnd("Sergey");
    deque2.pushToStart("Sergey");

    cout << "The top element is " << deque2.upper() << ".\nThe deque size is " << deque2.size() << "." << endl;

    deque2.popFromTheEnd();
    cout << "The top element is " << deque2.upper() << endl;

    deque2.popFromTheStart();
    cout << "The top element is " << deque2.lower() << endl;

    cout << "The deque size is " << deque2.size() << endl;

    if (deque2.isEmpty()) cout << "The deque is empty.\n";
    else cout << "The deque is not empty.\n";

    cout << "\n\n\n";


    DequeLinkedList<string> deque4;

    deque4.pushToEnd("Hi");
    deque4.pushToStart("Hi");
    deque4.pushToEnd("I'm");
    deque4.pushToStart("I'm");
    deque4.pushToEnd("Sergey");
    deque4.pushToStart("Sergey");

    deque4.upper();
    deque4.size();

    deque4.popFromTheEnd();
    deque4.upper();

    deque4.popFromTheStart();
    deque4.lower();

    deque4.size();

    if (deque4.isEmpty()) cout << "The deque is empty.\n";
    else cout << "The deque is not empty.\n";


    return 0;
}