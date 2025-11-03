// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5; // a and b are global variables

/* Global variables:
Accessible to all parts of code;
Memory managed statically by compiler;
Allocated in sata segment of memory;
Memory freed once program ends;
Best practice to avoid global vars

Automatic variables:
Local to their scope;
Defined within functions/loops;
Accessible in their scope and scopes inside of it only;
Once execution exits scope, variables deleted and memory freed;
Managed by compiler;
Allocated in stack segment of memory (temporary)
*/


int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive; //can make declarations anywhere in code
    positive = b - a; // result is 2^32 - 2 (two's complement representation of -2 in binary)
    std::cout << "b - a (unsigned) = " << positive << std::endl;


    std::cout << std::endl << std::endl;

    return 0;
}
