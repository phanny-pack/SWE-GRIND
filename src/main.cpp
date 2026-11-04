#include "../include/cout_colors.hpp"
#include "../test/test_runner.hpp"
#include <iostream>

int main()
{
    enableAnsiColors();
    runStackTests();
    runBackspaceStringCompareTests();
    return 0;
}