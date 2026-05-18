//CONDITIONAL STATEMENT -> Conditional statements in C++ are used to make decisions in a program. They execute different code depending on whether a condition is true or false

/*
| Statement | Purpose                         |
| --------- | ------------------------------- |
| `if`      | Runs code if condition is true  |
| `else`    | Runs code if condition is false |
| `else if` | Checks multiple conditions      |
| `switch`  | Chooses between many options    |
*/

#include<iostream>
using namespace std;

int main(){

    //IF CASE 
    cout<<"IF CASE"<<endl;
    int age = 18;
    if(age >= 18) {
        cout << "Adult"<<endl;
    }

    //IF ELSE CASE
    cout<<"IF ELSE CASE"<<endl;
    int ageOfVoter = 16;
    if(ageOfVoter >= 18) {
        cout << "Adult"<<endl;
    }
    else {
        cout << "Minor"<<endl;
    }

    // NESTED IF CASE
    cout<<"NESTED IF CASE"<<endl;
    int ageOfStudent = 20;
    bool idCard = true;

    if(ageOfStudent >= 18) {
        if(idCard) {
            cout << "Entry Allowed"<<endl;
        }
    }

    // IF ELSE_IF LADDER
    cout<<"IF ELSE IF LADDER"<<endl;
    int marks = 75;

    if(marks >= 90) {
        cout << "A"<<endl;
    }
    else if(marks >= 70) {
        cout << "B"<<endl;
    }
    else if(marks >= 50) {
        cout << "C"<<endl;
    }
    else {
        cout << "Fail"<<endl;
    }

    return 0;
}

/*
OUTPUT:-

IF CASE
Adult
IF ELSE CASE
Minor
NESTED IF CASE
Entry Allowed
IF ELSE IF LADDER
B

*/