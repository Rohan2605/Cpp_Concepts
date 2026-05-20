/*

Function -> A function in C++ is a reusable block of code that performs a specific task. Instead of writing the same code again and again, you put it inside a function and call it whenever needed.

-----------------------------------------------------------------------------------

structure:-

returnType functionName(parameters)
{
    // code
}

eg. - 
#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello";
}

int main()
{
    greet();

    return 0;
}

-----------------------------------------------------------------------------------

=> Types of functions

    1. No parameters, No return
        void hello()
        {
            cout << "Hi";
        }
    
    2. Parameters, No return
        void printSum(int a, int b)
        {
            cout << a + b;
        }
    
    3. Parameters, Return
        int multiply(int a, int b)
        {
            return a * b;
        }

    4. No parameters, Return
        int getNumber()
        {
            return 10;
        }

-----------------------------------------------------------------------------------

=> Passing values in function

    1. Pass by value - copies the value, original value does not change
        eg.- void change(int x)
            {
                x = 100;
            }

    2. Pass by reference - uses '&' which acts as reference to that variable, changes original values
        eg.- void change(int &x)
            {
                x = 100;
            }
-----------------------------------------------------------------------------------

=> Default arguments - we can pass default values to the args which come in use when there its value is not updated inside the function

eg.-    void greet(string name = "User")
        {
            cout << name;
        }

    
=> Inline function - it is a function that the compiler attempts to expand at each point where it is called, rather than performing a traditional function call. This replaces the call site with the actual body of the function, which can improve performance by eliminating the overhead associated with jumping to a function, managing the stack, and returning control.

inline int square(int x)
{
    return x * x;
}

now-a-days compiler do this by themselves they make a function or ignore based on need of program and complexity of function.

-----------------------------------------------------------------------------------

=> FUNCTION OVERLOADING

Function overloading in C++ means creating multiple functions with the same name but different parameters.
The compiler decides which function to call based on the arguments.

Rules:-
Functions can differ by:
1. Number of parameters
2. Type of parameters
3. Order of parameters

Eg.-
#include <iostream>
using namespace std;

class Demo {
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Demo d;

    cout << d.add(2, 3) << endl;
    cout << d.add(2.5, 3.5);

    return 0;
}

-----------------------------------------------------------------------------------

*/

#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

double sum(double a, double b){
    return a+b;
}

float percentage(int x){
    return (float(x*100)/500);
}

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 5, b = 8;
    cout<<"Value of a is: "<<a<<" Value of b is: "<<b<<endl;
    
    swapByValue(a,b);
    cout<<"After swapping by value"<<endl;
    cout<<"Value of a is: "<<a<<" Value of b is: "<<b<<endl;

    swapByRef(a, b);
    cout<<"After swapping by reference"<<endl;
    cout<<"Value of a is: "<<a<<" Value of b is: "<<b<<endl;

    cout<<sum(3,4)<<endl;
    cout<<sum(3.6, 6.7)<<endl;
    cout<<percentage(387)<<endl;

    return 0;
}