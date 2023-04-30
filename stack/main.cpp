#include <iostream>

#include "Stack.h"
#include "Stack.cpp"

using namespace std;


int main() {
    Stack<int> stack1;

    stack1.push(0);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);

    cout << "The top element is " << stack1.peek() << ".\nThe stack size is " << stack1.size() << "." << endl;

    for (int i = 0; i < 4; i++) {
        stack1.pop();
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        stack1.pop();

        stack1.push(i);
    }

    stack1.pop();
    cout << endl;

    if (stack1.isEmpty()) cout << "The stack is empty\n";
    else cout << "The stack is not empty\n";

    cout << "\n\n\n";


    Stack<string> stack2;

    stack2.push("Hi");
    stack2.push("everyone,");
    stack2.push("I'm");
    stack2.push("Sergey");
    stack2.push("!");

    cout << "The top element is " << stack2.peek() << ".\nThe stack size is " << stack2.size() << "." << endl;

    for (int i = 0; i < 4; i++) {
        stack2.pop();
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        stack2.pop();

        stack2.push("ky");
    }

    stack2.pop();
    cout << endl;

    if (stack2.isEmpty()) cout << "The stack is empty\n";
    else cout << "The stack is not empty\n";

    cout << "\n\n\n";

    return 0;
}