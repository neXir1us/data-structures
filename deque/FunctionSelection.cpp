//
// Created by Sergey on 21.04.2023.
//

#include <iostream>
#include "FunctionSelection.h"
#include "MyException.h"

using namespace std;


template<class T> void FunctionSelection<T>::check() {
    DequeLinkedList<T> newDeque;

    bool checkExit = true;
    int selectedValue = 0;

    while (checkExit) {
        cout << "\nInput a function to call (1-8, 0-exit):\n1. pushToStart();\n2. pushToEnd();\n" <<
                "3. popFromTheStart();\n4. popFromTheEnd();\n5. upper();\n6. lower();\n7. size();\n8. isEmpty().\n>> ";
        cin >> selectedValue;
        cout << "\n";

        try {
            T _val;

            switch (selectedValue) {
                case 0:
                    cout << "Exit!\n*/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-*\n\n\n";
                    checkExit = false;
                    break;
                case 1:
                    cout << "Print value: ";
                    cin >> _val;
                    newDeque.pushToStart(_val);
                    break;
                case 2:
                    cout << "Print value: ";
                    cin >> _val;
                    newDeque.pushToEnd(_val);
                    break;
                case 3:
                    newDeque.popFromTheStart();
                    break;
                case 4:
                    newDeque.popFromTheEnd();
                    break;
                case 5:
                    newDeque.upper();
                    break;
                case 6:
                    newDeque.lower();
                    break;
                case 7:
                    newDeque.size();
                    break;
                case 8:
                    if (newDeque.isEmpty()) cout << "Deque is empty!\n";
                    else cout << "Deque is not empty.\n";
                    break;
                default:
                    cout << "Invalid input! Function under this number does not exist.\n\n";
            }

        } catch(const MyException &error) { cout << error.what(); } // обработка общих исключений (которые прописаны вручную)
        catch(const std::exception&) { cout << "Something wrong!"<< endl; }  // обработка остальных исключений
    }
}