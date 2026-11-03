#pragma once

namespace dsa
{
    template <typename T>

    class Node
    {
    private:
        // Private members. Good practice is to keep them private and provide public methods to access them
        T _data;
        Node* _next;
        
    public:
        // Constructors
        
        // Default Constructor
        Node() : _data(T()), _next(nullptr) {}

        // Parameterized Constructor
        explicit Node(T data) : _data(data), _next(nullptr) {}

        // Public Methods

        // Setters
        auto set_data(T data) -> void
        {
            this->_data = data;
        }
        auto set_next(Node* next) -> void
        {
            this->_next = next;
        }

        // Getters
        auto get_data() const -> T
        {
            return _data;
        }
        auto get_next() const -> Node*
        {
            return _next;
        }
    };
} // namespace dsa