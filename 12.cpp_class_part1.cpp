

/*
CLASS - It is a Blueprint/Template

It defines:
=> variables → properties
=> functions → behaviors

eg. class Car {
    public:
        string color;
        int speed;

        void drive() {
            cout << "Driving";
        }
    };


OBJECT -> real instance of class.

Car c1;
c1.color = "Red"; //defines the color of the car
c1.drive(); //invokes drive function and prints driving

-----------------------------------------------------------------------------------

CONSTRUCTOR
 - automatically called when object is created
 - initializes object

Rules
 - same name as class
 - no return type
Eg.-   class Car {
        public:

            Car() {
                cout << "Constructor Called";
            }
        };

-----------------------------------------------------------------------------------

Types of constructors:- There are 3 types of constructors

(a) Default Constructor -> No parameters

eg.- Car() {
        //body
     }

    
(b) Parameterized Constructor

Takes arguments.

eg.-    class Car {
        public:
            int speed;

            Car(int s) {
                speed = s;
            }
        };

        Car c1(100);

(c) Copy Constructor

Copies one object into another.

eg.-    class Car {
        public:
            int speed;

            Car(int s) {
                speed = s;
            }

            Car(const Car &c) {
                speed = c.speed;
            }
        };

        Car c1(100);
        Car c2 = c1;

        //Copy constructors make shallow copy when memory is allocated dynamically, we need to fix it using virtual keyword to make sure it creates a deep copy and not a shallow copy.

-------------------------------------------------------------------------------------------

Constructor Overloading - Multiple constructors in same class.

eg.-    class A {
        public:

            A() {}

            A(int x) {}

            A(int x, int y) {}
        };

-------------------------------------------------------------------------------------------

Destructor - automatically called when object is destroyed, frees resources/memory
Syntax -> ~ClassName() {

            }

eg.- class Car {
    public:

        ~Car() {
            cout << "Destructor Called";
        }
    };

Rules:-
 - same name with ~
 - no return type
 - no parameters
 - only one destructor per class

-------------------------------------------------------------------------------------------

Access Modifiers -> Control visibility of members

| Modifier    | Accessible?                  |
| ----------- | ---------------------------- |
| `public`    | Everywhere                   |
| `private`   | Inside class only            |
| `protected` | Inside class + child classes |

eg.- class Student {

    private:
        int marks;

    public:
        void setMarks(int m) {
            marks = m;
        }
    };

Cannot do:- s.marks = 90; //because marks is private.

------------------------------------------------------------------------------------------

'this' Keyword -> 'this' is a pointer to current object.

eg.- class A {
    public:
        int x;

        A(int x) {
            this->x = x;
        }
    };

Why Needed?
because Parameter name and member name same:
x = x; //would confuse compiler.

So: this->x
means:object's variable

-------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

class Bank{
    private:
        int balance = 1000;
        int account_no = 123456;
    public:
        string name;
        int age;

        //setter - for setting private values
        void changeBalance(int balance){
            this->balance = balance; //here this refers to private variable and other balance refers to our balance which we want to update
        }

        Bank(){
            cout<<"default constructor called"<<endl;
        }

        Bank(int age, string name){
            cout<<"parameter constructor called"<<endl;
            this->age = age;
            this->name = name;
        }

        Bank(Bank &c){
            cout<<"copy constructor called"<<endl;
            age = c.age;
            name = c.name;
        }

        ~Bank(){
            cout<<"Destructor called"<<endl;
        }

        //getter - to see private values
        void seeBalance(){
            cout<<"Balance: "<<balance<<endl;
        }
        void seeAccountNo(){
            cout<<"Account no: "<<account_no<<endl;
        }

        void getDetail(){
            cout<<"Name: "<<name<<", Age: "<<age<<endl;
            cout<<endl;
        }

};

int main(){

    Bank c1; //no parameter constructor called here
    c1.age = 25;
    c1.name = "Raj";
    c1.getDetail();

    Bank c2(20, "Raman");
    c2.getDetail();

    Bank c3 = c2;
    c3.getDetail();

    // This is not accessible as this is a private member
    // c1.balance = 2000; 

    c1.seeBalance();
    c1.seeAccountNo();
    c1.changeBalance(25000); // balance changes after this
    c1.seeBalance();



    return 0;
}

/*
OUTPUT:-

    default constructor called
    Name: Raj, Age: 25

    parameter constructor called
    Name: Raman, Age: 20

    copy constructor called
    Name: Raman, Age: 20

    Balance: 1000
    Account no: 123456
    Balance: 25000

    //( as objects are stored in stack so last created is destructed first )

    Destructor called // destructs c3
    Destructor called // destructs c2
    Destructor called // destructs c1

*/