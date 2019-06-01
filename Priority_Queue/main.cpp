#include <iostream>
#include "priority_queue.h"

int main()
{
    Priority_Queue<int> queue;

    queue.push(5);
    queue.push(3);
    queue.push(7);
    queue.push(1);
    queue.push(10);

    queue.print_queue();

    return 0;
}