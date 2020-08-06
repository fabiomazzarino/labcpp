
#include <iostream>
#include "CStack.h"

int main() {
    CStack<int> stack;
    std::cout << "Pushing..." << std::endl;
    for (int ct = 10; ct--; ) {
        stack.push(ct);
        std::cout << ct << " ";
    }
    std::cout << std::endl << "Stack size: " << stack.getSize() << std::endl;
    std::cout << "Stack top: " << stack.top() << std::endl;
    std::cout << "Popping..." << std::endl;
    while (stack.getSize())
        std::cout << stack.pop() << " ";
    std::cout << std::endl << "Stack size: " << stack.getSize() << std::endl;
}
