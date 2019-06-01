#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>
#include <algorithm>

template<typename T>
class Priority_Queue
{
public:
    T top()
    {
        return queue.back();
    }

    void pop()
    {
        queue.pop_back();
    }

    void push(const T& e)
    {
        queue.push_back(e);

        for(int i = queue.size() - 1; i >= 0; i--)
        {
            if(queue[i] > queue[i - 1]) std::swap(queue[i], queue[i - 1]);
        }
    }

    void print_queue()
    {
        auto print = [](const T& e)
        {
            std::cout << e << ", ";
        };

        std::for_each(queue.rbegin(), queue.rend(), print);
    }

private:
    std::vector<T> queue;
};

#endif