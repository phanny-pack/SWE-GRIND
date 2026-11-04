#include <iostream>
#include <stdexcept>

namespace dsa
{
    template <typename T>
    Stack<T>::Stack() : _top(nullptr), _size(0) {}

    // Given an array of elements, initialize the stack with those elements
    template <typename T>
    Stack<T>::Stack(T arr[]) : _top(nullptr), _size(0)
    {
        for (int i = 0; arr[i] != T(); ++i)
        {
            push(arr[i]);
        }
    }

    template <typename T>
    auto Stack<T>::push(T data) -> void
    {
        dsa::Node<T>* newNode = new dsa::Node<T>(data);
        newNode->set_next(_top);
        _top = newNode;
        _size++;
    }

    template <typename T>
    auto Stack<T>::pop() -> void
    {
        if (isEmpty())
        {
            throw std::runtime_error("Stack is empty. Cannot pop.");
        }
        dsa::Node<T>* temp = _top;
        _top = _top->get_next();
        delete temp;
        _size--;
    }

    template <typename T>
    auto Stack<T>::top() -> T
    {
        if (isEmpty())
        {
            throw std::runtime_error("Stack is empty. Cannot retrieve top.");
        }
        return _top->get_data();
    }

    template <typename T>
    auto Stack<T>::isEmpty() -> bool
    {
        return _size == 0;
    }

    template <typename T>
    auto Stack<T>::contains(T data) -> bool
    {
        dsa::Node<T>* current = _top;
        while (current != nullptr)
        {
            if (current->get_data() == data)
            {
                return true;
            }
            current = current->get_next();
        }
        return false;
    }

    template <typename T>
    auto Stack<T>::print_stack() -> void
    {
        dsa::Node<T>* current = _top;
        std::cout << "Stack elements (top to bottom): ";
        while (current != nullptr)
        {
            std::cout << current->get_data() << " ";
            current = current->get_next();
        }
        std::cout << std::endl;
    }
}