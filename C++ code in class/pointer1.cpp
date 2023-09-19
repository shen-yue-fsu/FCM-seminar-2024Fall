#include <iostream>

int main() {

//  Pointers are variables that hold the memory address for a variable of a specific type.
//  Pointers are declared by specifying the variable type, followed by the * symbol, followed by the name of the pointer variable, e.g., \textbf{double *x} defines a "pointer to double" variable. 
//  The variable, x, therefore, does not hold the value of a double type, but rather, the memory address for a variable of type, \textbf{double}. 
//  The memory address for a variable can be obtained by the & operator. 


    double *ip;
    double val;
    double a;

    val = 7;
    ip = &val;
    a = val;
    
    std::cout << "Value of val variable: ";
    std::cout << val << std::endl;
     
    // Prints some memory address (starts with 0x)
    std::cout << "Address stored in ip variable: ";
    std::cout << ip << std::endl;
     
    std::cout << "Value of *ip variable: ";
    std::cout << *ip << std::endl;

    
    return 0;
}
