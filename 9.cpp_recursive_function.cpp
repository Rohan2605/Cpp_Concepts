/*
Recursive function -> A recursive function is a function that calls itself to solve a problem by breaking it into smaller versions of the same problem.

--------------------------------------------------------------------------
Basic Idea of Recursion

A recursive function has two essential parts:
-> Base Case : Stops recursion.
-> Recursive Case : Function calls itself with a smaller/simpler input.

eg- int fun(int n){
        if(n==0) return 0
        return n + fun(n-1);
    }
    
    int main(){
        cout<<fun(5);
    }

------------------------------------------------------------------------------

=> TYPES OF RECURSION

1. Direct recursion - Function calls itself directly.

int fun(int n){
    if(n==0) return 0;
    return fun(n-1);
}

2. Indirect recursion - Functions call each other.

int even(int n){
    if(n==0) return true;
    return odd(n-1);
}

int odd(int n){
    if(n==0) return false;
    return even(n-1);
}

3. Tail recursion - Recursive call is the last operation. (IMPORTANT)

int factorial_tail(int n, int acc=1){
    if (n == 0) return acc;
    return factorial_tail(n-1, n*acc);
}

Advantages:
 - easier optimization
 - lower memory usage in some languages


4. Head Recursion - Recursive call happens first.

int print_numbers(n){
    if (n == 0) return;
    print_numbers(n-1);
    cout<<n;
}

5. Tree Recursion - Function makes multiple recursion calls.

int fib(n){
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

--------------------------------------------------------------------------

Recursive Thinking Strategy:

To solve recursively:
- Define smallest solvable problem
- Define base case
- Assume smaller problem works
- Use smaller solution to solve bigger problem

*/


#include<iostream>
using namespace std;

//FACTORIAL OF A NUMBER
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

//FIBONACCI SERIES
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

//POWER OF A NUMBER
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a, b-1);
}

//SUM OF N NATURAL NUMBERS
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}

//PRINT NUMBER 1 TO N;
void printNum(int n){
    if(n==0) return;
    printNum(n-1);
    cout<<n<<" ";
}

//PRINT NUMBER N TO 1;
void printNumRev(int n){
    if(n==0) return;
    cout<<n<<" ";
    printNumRev(n-1);
}

//CHECK PALINDROME
bool palindrome(string s, int start, int end){
    if(start>=end) return true;

    if(s[start]!=s[end]) return false;

    return palindrome(s, start+1, end-1);
}

//GCD
int gcd(int a, int b){
    if(b==0) return a;

    return gcd(b, a%b);
}

//TOWER OF HANOI(TOH)
void TOH(int n, char source, char middle, char destination){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }

    TOH(n-1, source, destination, middle);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    TOH(n-1,middle, source, destination);
}

int main(){

    cout<<"Factorial: "<<factorial(5)<<endl;
    
    for(int i=0; i<6; i++){
        cout<<fibo(i)<<" ";
    }
    cout<<endl;

    cout<<"Power: "<<power(2,5)<<endl;

    cout<<"Sum: "<<sum(4)<<endl;

    printNum(5);
    cout<<endl;

    printNumRev(5);
    cout<<endl;

    cout<<"Is palindrom: ";
    (palindrome("madam", 0,4))?cout<<"true":cout<<"false";
    cout<<endl;

    cout<<"GCD: "<<gcd(16,12)<<endl;

    TOH(3, 'A', 'B', 'C');  
    return 0;    
}

