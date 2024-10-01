#include <iostream>
#include "list.h"
using namespace std;

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.printStack();
    cout << "Top element is: " << stack.top() << endl;
    stack.pop();
    stack.printStack();
    cout << "Top element is: " << stack.top() << endl;
    stack.pop();
    stack.pop();
    stack.printStack();

    return 0;
}