#pragma once

#include "node.hpp"

namespace dsa
{
    template <typename T>
    class Stack
    {
    private:
        dsa::Node<T>* _top;
        int _size;
    public:
        Stack();
        Stack(T arr[]);
        auto push(T data) -> void;
        auto pop() -> void;
        auto top() -> T;
        auto isEmpty() -> bool;
        auto get_size() -> int { return _size; }
        auto contains(T data) -> bool;
        auto print_stack() -> void;
    };
}

#include "stack.tpp"  // Include the implementation file for template instantiation
