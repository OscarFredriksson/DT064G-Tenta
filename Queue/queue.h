#ifndef QUEUE_H
#define QUEUE_H

template<typename T>
class Queue
{
public:
    Queue() = default;

    void enqueue(T value)
    {
        if(!front) front = new Node(value);
        else
        {
            Node* prev = front;
            
            front = new Node(value);
            front->prev = prev;
        }
        
    }

    T dequeue()
    {
        T ret = front->value;
        
        Node* temp = front;

        front = front->prev;

        delete temp;

        return ret;
    }

    void print_queue()
    {
        auto iter = front;
        while(iter)
        {
            std::cout << iter->value << ", ";
            iter = iter->prev;
        }
    }


private:
    struct Node
    {
        Node(T value):
            value(value)
        {}

        T value;
        Node* prev = nullptr;
    };

    Node* front = nullptr;
};

#endif