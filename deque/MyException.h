//
// Created by Sergey on 21.04.2023.
//

#include <iostream>
#ifndef STRUCTURES_MYEXCEPTION_H
#define STRUCTURES_MYEXCEPTION_H

using namespace std;


class MyException : public exception {
    string message;

public:
    MyException(const string &message): message{message} {}

    const char *what() const noexcept override
    {
        return message.c_str();     // получаем из std::string строку const char*
    }

};


#endif //STRUCTURES_MYEXCEPTION_H
