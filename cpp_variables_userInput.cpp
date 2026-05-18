#include<iostream>
using namespace std;

int main(){

    //Variable can of different types
    /* Type        | Used For                         | Example                         |
| ----------- | -------------------------------- | ------------------------------- |
| `int`       | Integer numbers                  | `int age = 20;`                 |
| `float`     | Decimal numbers (less precision) | `float pi = 3.14f;`             |
| `double`    | Decimal numbers (more precision) | `double price = 99.99;`         |
| `long`      | Larger integers                  | `long population = 1000000;`    |
| `long long` | Very large integers              | `long long stars = 9999999999;` |
| `char`      | Single character                 | `char grade = 'A';`             |
| `bool`      | True or false values             | `bool isOn = true;`             |
| `string`    | Text or words                    | `string name = "John";`         |*/

    int x;
    float y;
    double z;
    char a;
    bool check = true;
    string name;

    cout<<"Enter int value \n";
    cin>>x;
    /*cin is an object in C++ used to take input from the keyboard. It is part of the iostream library and belongs to the std namespace, so its full name is std::cin. It uses the >> operator to store user input into a variable.*/

    cout<<"Enter float value \n";
    cin>>y;
    cout<<"Enter double value \n";
    cin>>z;
    cout<<"Enter char value (single character)\n";
    cin>>a;
    cout<<"Enter name(string) value \n";
    cin>>name;

    cout<<x<<" "<<y<<" "<<z<<" "<<a<<" "<<check<<" "<<name<<endl;

    return 0;
}

/*
OUTPUT:-

Enter int value 
2
Enter float value 
2.34
Enter double value 
2.3456
Enter char value (single character)
a
Enter name(string) value 
raja 
2 2.34 2.3456 a 1 raja

*/