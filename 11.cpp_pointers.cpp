/*
POINTERS:-
They are variables that store the memory address of another variable.

int x = a (normal variable)

int* x = &a (pointer that stores address of a, '&' is the address of operator, gives address of a variable)

so x = address of a, *x gives values of a as it dereferences the address to reach a's value

| Symbol | Meaning               |
| ------ | --------------------- |
| `&`    | Address of variable   |
| `*`    | Pointer / dereference | (dereference - "go to stored address and get value")
 
-----------------------------------------------------------------------------------------

Null Pointer :- Pointer pointing nowhere, Good practice to avoid garbage addresses.

int* ptr = nullptr;

------------------------------------------------------------------------------------------

Pointer to Pointer

int x = 10;
int* p = &x;
int** pp = &p;

-------------------------------------------------------------------------------------------

Arrays and Pointers

Array name acts like pointer.

int arr[] = {1,2,3};
cout << arr; //prints address of first element.

Access Using Pointer
cout << *(arr + 1);

Output: 2

------------------------------------------------------------------------------------------

Pass By Pointer:-
void change(int* p)
{
    *p = 100;
}

int x = 15;
change(&x); //Original variable changes to 100

-------------------------------------------------------------------------------------------

Dynamic Memory Allocation

Using new: int* ptr = new int(10); // dynamically set the value in heap

Free memory: delete ptr; // delete the pointer to that variable to free memory

-------------------------------------------------------------------------------------------

*/

#include <iostream>
using namespace std;

void change(int* a){
    *a = 20;
}

void swapWithoutPointer(int a, int b){
    int c = a;
    a = b;
    b = c;
}

void swapWithPointer(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {

    //POINTER TO VARIABLE
    int x = 10;
    int* ptr = &x;

    cout << "The value of x: " << x << endl;
    cout << "The address of x: " << &x << endl;
    cout << "The value of ptr: " << ptr << endl;
    cout << "The address of ptr: " << *ptr << endl;

    //POINTER TO POINTER
    int y = 10;
    int* p = &y;
    int** pp = &p;   

    cout << "The value of y: " << y << endl;
    cout << "The address of y: " << &y << endl;
    cout << "The value of ptr 'p': " << p << endl;
    cout << "The address of ptr 'p': " << *p << endl;
    cout << "The value of ptr 'pp': " << pp << endl;
    cout << "The address of ptr 'pp': " << *pp << endl;

    //Pass by pointer
    int a = 30;
    cout<<"Before change a: "<<a<<endl;
    change(&a);
    cout<<"After change a: "<<a<<endl;

    //SWAP WITHOUT POINTER
    int c=5, d=10;
    cout<<"Before swap without pointer: c "<<c<<" d "<<d<<endl;
    swapWithoutPointer(c,d);
    cout<<"Before swap without pointer: c "<<c<<" d "<<d<<endl;

    //SWAP WITH POINTER
    cout<<"Before swap with pointer: c "<<c<<" d "<<d<<endl;
    swapWithPointer(&c,&d);
    cout<<"Before swap with pointer: c "<<c<<" d "<<d<<endl;


    //ARRAY ALSO ACTS AS POINTER TO FIRST VALUE OF POINTER
    int arr[] = {11, 12, 13, 14, 15};
    cout<<"first element address of array: "<<arr<<endl;
    cout<<"second element of array: "<<*(arr+1)<<endl;

    //POINTER ARITHMETIC
    int* ptr1 = arr;
    cout << *ptr1 << endl;
    
    // --->Increment and Decrement
    ptr1++;
    cout << *ptr1 << endl;

    ptr1--;
    cout<< *ptr1 << endl;

    // --->Arithmetic operation  (no multiple and divison)
    ptr1 = ptr1 + 3;
    cout<< *ptr1 << endl;

    ptr1 = ptr1 - 1;
    cout<< *ptr1 << endl;

    return 0;
}