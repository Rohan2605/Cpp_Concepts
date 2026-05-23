/*
4 pillars - encapsulation, inheritance, polymorphism, abstraction
operator overloading
friend class and function
virtual function and class
function overiding
*/

/*
=> 4 Pillars of OOP's

| Pillar        | Meaning                               |
| ------------- | ------------------------------------- |
| Encapsulation | Wrapping data + methods together      |
| Abstraction   | Hiding implementation details         |
| Inheritance   | Reusing properties from another class |
| Polymorphism  | One thing behaving differently        |

-----------------------------------------------------------------------------------

1. ENCAPSULATION -> binding data and functions inside one class, also data hiding using private members

eg- class Bank {

    private:
        int balance;

    public:

        void setBalance(int b) {
            balance = b;
        }

        int getBalance() {
            return balance;
        }
    };

Protects data from direct modification.
Wrong:- obj.balance = -100000;

----------------------------------------------------------------------------------------

2. ABSTRACTION -> hide necessary details, show only - essential features

eg. - Car:
- You use steering/brakes
- You don't care how engine internally works

eg.- class Car {

    public:

        void startCar() {
            engineStart();
        }

    private:

        void engineStart() {
            cout << "Engine Started";
        }
    };

    startCar();

---------------------------------------------------------------------------------------

3. INHERITANCE -> one class acquire property of another class

class Child : public Parent {

};

eg.- class Animal {

        public:
            void eat() {
                cout << "Eating";
            }
        };

        class Dog : public Animal {

        };


        Dog d;
        d.eat();

=> Types of inheritance

| Type         | Example   |
| ------------ | --------- |
| Single       | A → B     |
| Multilevel   | A → B → C |
| Multiple     | A,B → C   |
| Hierarchical | A → B,C   |

---------------------------------------------------------------------------------------

4. POLYMORPHISM -> one thing can have multiple forms

| Type         | Example              |
| ------------ | -------------------- |
| Compile-time | Function overloading |
| Runtime      | Function overriding  |

---------------------------------------------------------------------------------------

==> FUNCTION OVERLOADING

Same function name - different parameters

class Math {

public:

    int add(int a, int b) {
        return a+b;
    }

    int add(int a, int b, int c) {
        return a+b+c;
    }
};

Compiler decides which function to call.

-----------------------------------------------------------------------------------

==> FUNCTION OVERRIDING

Child class redefines parent function

eg.- class Animal {
    public:
        void sound() {
            cout << "Animal Sound";
        }
    };

    class Dog : public Animal {
    public:
        void sound() {
            cout << "Bark";
        }
    };

    Dog d;
    d.sound(); // OUTPUT - Bark

---------------------------------------------------------------------------------------

==> VIRTUAL FUNCTION:- used for runtime polymorphism


Animal* a = new Dog();
a->sound();

Without virtual -> Animal Sound

//(because pointer type decides function)

-------------------********------------------------

class Animal {
public:
    virtual void sound() {
        cout << "Animal";
    }
};

Animal* a = new Dog();
a->sound(); // OUTPUT -> Bark

Now object type decides function at runtime.
This is:- Runtime Polymorphism

-----------------------------------------------------------------------------------------

Pure Virtual Function

virtual void show() = 0; //This makes sure that child class has to implement it

This also Makes class:- [abstract class] //Cannot create object of abstract class.

ABSTRACT CLASS -> it serves as a foundational base class, designed to be inherited and completed by subclasses. (acts as common interface)

------------------------------------------------------------------------------------------

FRIEND FUNCTION :- A non-member function that can access private members.

Eg.-
        class A {

        private:
            int x = 10;

            friend void show(A);
        };

        void show(A obj)
        {
            cout << obj.x;
        }

Normally private members are inaccessible, Friend bypasses that.

-----------------------------------------------------------------------------------------

Friend Class - Entire class becomes friend

Eg.-
        class B;

        class A {

        private:
            int x = 10;

            friend class B;
        };

        class B {

        public:
            void show(A obj)
            {
                cout << obj.x;
            }
        };

*/

#include <iostream>
using namespace std;

/*
-----------------------------------------
ENCAPSULATION (Private data + public methods)
-----------------------------------------
*/

class BankAccount
{

private:
    int balance;

public:
    void setBalance(int b)
    {
        balance = b;
    }

    int getBalance()
    {
        return balance;
    }
};

/*
-----------------------------------------
 ABSTRACTION + VIRTUAL FUNCTION
-----------------------------------------
*/

class Animal
{

public:
    // Pure virtual function
    virtual void sound() = 0;

    virtual ~Animal() {}
};

/*
-----------------------------------------
 INHERITANCE + FUNCTION OVERRIDING
-----------------------------------------
*/

class Dog : public Animal
{

public:
    void sound() override
    {
        cout << "Dog Barks" << endl;
    }
};

/*
-----------------------------------------
 FRIEND FUNCTION
-----------------------------------------
*/

class Student
{

private:
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    friend void showMarks(Student s);
};

void showMarks(Student s)
{
    cout << "Marks = " << s.marks << endl;
}

/*
-----------------------------------------
6. FRIEND CLASS
-----------------------------------------
*/

class B;

class A
{

private:
    int x = 10;

    friend class B;
};

class B
{

public:
    void show(A obj)
    {
        cout << obj.x;
    }
};

/*
-----------------------------------------
MAIN FUNCTION
-----------------------------------------
*/

int main()
{

    /*
    -------------------------------------
    ENCAPSULATION
    -------------------------------------
    */

    BankAccount acc;

    acc.setBalance(5000);

    cout << "Balance = "
         << acc.getBalance()
         << endl;

    /*
    -------------------------------------
    ABSTRACTION + INHERITANCE +
    POLYMORPHISM + OVERRIDING
    -------------------------------------
    */

    Animal *a = new Dog();

    a->sound();

    delete a;

    /*
    -------------------------------------
    FRIEND FUNCTION
    -------------------------------------
    */


    Student s1(95);

    showMarks(s1);

    /*
    -------------------------------------
    FRIEND CLASS
    -------------------------------------
    */

    A objA;
    B objB;

    objB.show(objA);

    return 0;
}

/*

OUTPUT:-

Balance = 5000
Dog Barks
Marks = 95
10

*/