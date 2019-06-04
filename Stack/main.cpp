#include <iostream>
#include "stack.h"

int main()
{
    Stack<int> stack;

    stack.push(5);
    stack.push(10);
    stack.push(7);

    for(int i = 0; i < 3; i++)
        std::cout << stack.pop() << "\n";

    return 0;
}