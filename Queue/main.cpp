#include <iostream>
#include "queue.h"

int main()
{
    Queue<int> queue;

    queue.enqueue(5);
    queue.enqueue(7);
    queue.enqueue(3);


    queue.print_queue();

    queue.dequeue();

    queue.enqueue(12);

    std::cout << "\n";
    queue.print_queue();

    return 0;
}