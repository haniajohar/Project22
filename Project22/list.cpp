#include <iostream>
#include "list.h"
using namespace std;
Stack::Stack() : topNode(nullptr) {}
Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}
bool Stack::isEmpty() {
    return topNode == nullptr;
}
void Stack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = topNode;
    topNode = newNode;
}
void Stack::pop() {
    if (isEmpty()) {
        cout << "Stack underflow. Cannot pop from an empty stack." << endl;
        return;
    }
    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
}
int Stack::top() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1;
    }
    return topNode->data;
}
void Stack::printStack() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    Node* temp = topNode;
    cout << "Stack contents (top to bottom): ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
