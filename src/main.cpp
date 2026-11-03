#include "../include/dsa/stack.hpp"
#include "../test/stack_test.cpp"
#include "../include/dsa/cout_colors.hpp"
#include <iostream>

int main()
{
    enableAnsiColors();
    StackTest::runTests();
    return 0;
}