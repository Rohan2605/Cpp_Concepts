#include<iostream> //It is a standard C++ header file used for input and output operations.

/*

Header files is a file that contains declarations you can reuse in your programs
They commonly contain:
- Function declarations
- Class definitions
- Constants
- Templates
- Library features

*/

using namespace std;

/*using namespace std; lets you use standard C++ library names like cout, cin, and string without writing std:: before them every time. Normally, these are inside the std namespace, so you would write std::cout. By using using namespace std;, the compiler automatically understands that these names come from the standard library, making the code shorter and easier to write.*/

int main(){ // This is a function with integer return types (Here int represents return type and main is the function name)

    cout<<"Hello World"; 
    
    /*This is an object in C++ used to display output on the screen. It is part of the iostream library and belongs to the std namespace, so its full name is std::cout. It uses the << operator to send data to the console.*/

    return 0;
    /*`return 0;` in `int main()` means the program ended successfully and sends the value `0` back to the operating system. Here, `int` means the `main` function must return an integer value. A return value of `0` usually indicates “no errors.” In modern C++, writing `return 0;` at the end of `main()` is optional because the compiler automatically adds it if omitted, but many programmers still write it for clarity.
    */
   
}