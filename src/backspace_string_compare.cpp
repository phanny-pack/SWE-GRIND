#include "backspace_string_compare.hpp"

#include <stack>

bool backspace_string_compare_problem::backspace_string_compare(
    const std::string& s, const std::string& t)
{
    std::stack<char> s_stack;
    std::stack<char> t_stack;

    for (char character : s) {
        if (character == '#') {
            if (!s_stack.empty()) {
                s_stack.pop();
            }
        } else {
            s_stack.push(character);
        }
    }

    for (char character : t) {
        if (character == '#') {
            if (!t_stack.empty()) {
                t_stack.pop();
            }
        } else {
            t_stack.push(character);
        }
    }

    if (s_stack.size() != t_stack.size()) {
        return false;
    }

    while (!s_stack.empty()) {
        if (s_stack.top() != t_stack.top()) {
            return false;
        }
        s_stack.pop();
        t_stack.pop();
    }
    return true;
}
