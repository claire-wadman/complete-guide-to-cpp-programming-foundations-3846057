// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

/* # indicates compiler directive
   following line tells compiler to include header file iostream (library) */
#include <iostream> // preprocessor directive

// every line of executable code must be a part of a function

// must have main function that returns int
int main(){
    // :: = scope resolution operator
    // << = insertion operator
    std::cout << "Hello World" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;

}

/*
Alternate hello worlds :
---------------------------------------------
#include <cstdio>

int main(){
    printf("Hello World\n");

    return 0;
}
---------------------------------------------

#include <iostream>
// command line program that produces an executable

int main(int argc, char* argv[]){
    // argc = integer that represents the number of command line arguments
    // passed to the program

    // argv = array of c-style strings representing those arguments

    std::cout << "Hello world" << std::endl;
    return 0;

}

*/