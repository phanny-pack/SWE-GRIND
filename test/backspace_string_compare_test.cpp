#include "backspace_string_compare.hpp"
#include "test_runner.hpp"
#include <iostream>
#include "../include/cout_colors.hpp"
#include <cassert>
using namespace std;


class BackspaceStringCompareTest {
public:
    static void runTests() {
        backspace_string_compare_problem problem;
        string s = "hojun#";
        string t = "hoju";
        assert(problem.backspace_string_compare(s, t) == true);
        s = "a##c";
        t = "#a#c";
        assert(problem.backspace_string_compare(s, t) == true);
        s = "a#c";
        t = "b";
        assert(problem.backspace_string_compare(s, t) == false);
        s = "m#c";
        t = "m";
        assert(problem.backspace_string_compare(s, t) == false);
        cout << GREEN << "[PASSED] " << RESET << "BackspaceStringCompareTest " << endl;

    }
};

void runBackspaceStringCompareTests()
{
    BackspaceStringCompareTest::runTests();
}