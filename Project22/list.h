#pragma once
#ifndef LIST_H
#define LIST_H

#include "node.h"

class Stack {
private:
    Node* topNode;

public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int value);
    void pop();
    int top();
    void printStack();
};

#endif // LIST_H

