#include "../include/dsa/stack.hpp"
#include "../include/cout_colors.hpp"
#include "test_runner.hpp"
#include <iostream>
#include <cassert>

class StackTest
{
public:
    static void runTests()
    {
        testPushAndTop();
        testPop();
        testIsEmpty();
        testContains();
        testPrintStack();
    }
    
    static void testPushAndTop()
    {
        dsa::Stack<int> stack;
        stack.push(1);
        stack.push(2);
        stack.push(3);
        assert(stack.top() == 3);
        std::cout << GREEN << "[PASSED] " << RESET << "testPushAndTop " << std::endl;
    }

    static void testPop()
    {
        dsa::Stack<int> stack;
        stack.push(1);
        stack.push(2);
        stack.pop();
        assert(stack.top() == 1);
        std::cout << GREEN << "[PASSED] " << RESET << "testPop " << std::endl;
    }

    static void testIsEmpty()
    {
        dsa::Stack<int> stack;
        assert(stack.isEmpty());
        stack.push(1);
        assert(!stack.isEmpty());
        std::cout << GREEN << "[PASSED] " << RESET << "testIsEmpty " << std::endl;
    }

    static void testContains()
    {
        dsa::Stack<int> stack;
        stack.push(1);
        stack.push(2);
        assert(stack.contains(1));
        assert(stack.contains(2));
        assert(!stack.contains(3));
        std::cout << GREEN << "[PASSED] " << RESET << "testContains " << std::endl;
    }

    static void testPrintStack()
    {
        dsa::Stack<int> stack;
        stack.push(1);
        stack.push(2);
        stack.push(3);
        std::cout << "Stack contents: ";
        stack.print_stack(); // Should print 3, 2, 1
        while (!stack.isEmpty())
        {
            stack.pop();
        }
        std::cout << GREEN << "[PASSED] " << RESET << "testPrintStack " << std::endl;
    }
};

void runStackTests()
{
    StackTest::runTests();
}
