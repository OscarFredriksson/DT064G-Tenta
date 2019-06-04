#ifndef STACK_H
#define STACK_H


template<typename T>
class Stack
{
public:
    Stack() = default;

    T pop()
    {
        T ret = top->value;

        Node* temp = top;

        top = top->prev;

        delete temp;
        
        return ret;
    }

    void push(const T& e)
    {
        Node* temp = top;

        top = new Node(e);

        top->prev = temp;
    };

private:
    struct Node
    {
        Node(T value):
            value(value)
        {}

        T value;
        Node* prev = nullptr;
    };

    Node* top = nullptr;
};

#endif