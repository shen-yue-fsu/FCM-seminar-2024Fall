#include <iostream>

int main() {
    bool a,b,c; // Declare the type of variables a, b, and c.
    a = true;
    b = false;

    // !  is logical negation when applied to a single variable.
    c = !a; // c is false.

    std::cout << "c=b!a; --->  c = " << c << " (: c is false)" << std::endl;

    // && is logical and.
    c = (a && b); // c is false.

    // || is logical or.
    c = (a || b); // c is true.
    
    return 0;
}
