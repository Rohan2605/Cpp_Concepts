/*
C++ operators are symbols used to perform operations on variables and values.
| Operator Type   | Examples       | Purpose                |    
-----------------------------------------------------------------
| Arithmetic      | `+ - * / %`      | Math operations        | 
| Assignment      | `= += -= *=`     | Assign values          |
| Comparison      | `== != > < >= <=`| Compare values         | 
| Logical         | `&& || !`        | Combine conditions     |
| Inc./Dec.       | `++ --`          | Increase/decrease by 1 |
| Bitwise         | ` & | ^ ~ << >>` | bitwise operations     |

*/

#include<iostream>
using namespace std;

int main(){

    //ARITHMETIC
    cout<<"ARITHMETIC"<<endl;

    int x1 = 10, x2=3;
    cout<<x1+x2<<" "<<x1-x2<<" "<<x1*x2<<" "<<x1/x2<<" "<<x1%x2<<endl;

    // COMPARISON / RELATIONAL
    cout<<"COMPARISON/RELATIONAL"<<endl;

    int a=4, b=5;
    cout<<(a==b)<<" "<<(a!=b)<<" "<<(a>b)<<" "<<(a<b)<<" "<<(a>=b)<<" "<<(a<=b)<<endl;

    //ASSIGNMENT
    cout<<"ASSIGNMENT"<<endl;

    int y = 5;
    y += 5;
    cout<<y<<" ";
    
    y -= 3;
    cout<<y<<" ";

    y *= 4;
    cout<<y<<endl;

    //LOGICAL
    cout<<"LOGICAL"<<endl;

    int t = 1, f=0;
    cout<<(t&&f)<<" "<<(t||f)<<" "<<(!t)<<endl;

    //INCREMENT / DECREMENT
    cout<<"INCREMENT/DECREMENT"<<endl;

    int i=7, j=4;
    cout<<i++<<" "<<j++<<" "<<++i<<" "<<++j<<" "<<endl; // pre and post increment
    cout<<i--<<" "<<j--<<" "<<--i<<" "<<--j<<" "<<endl; // pre and post decrement

    //BITWISE
    cout<<"BITWISE"<<endl;
    int n = 5;// 0101
    int m = 3;// 0011

    cout << (n & m) << endl; // and -> if both bits are 1 then 1 else 0
    cout << (n | m) << endl; // or -> if both bits are 0 then 0 else 1
    cout << (n ^ m) << endl; // xor -> if both bits are differnet then 1 else 0
    cout << (~n) << endl; // changes 1->0 and 0->1
    cout << (n << 1) << endl; // left shift -> shift all bits to left 1 time
    cout << (n >> 1) << endl; // right shift -> shift all bits to right 1 time

    return 0;
}

/*
OUTPUT:-

ARITHMETIC
13 7 30 3 1
COMPARISON/RELATIONAL
0 1 0 1 0 1
ASSIGNMENT
10 7 28
LOGICAL
0 1 0
INCREMENT/DECREMENT
8 5 9 6 
8 5 7 4 
BITWISE
1
7
6
-6
10
2

*/