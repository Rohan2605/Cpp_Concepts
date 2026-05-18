//SWITCH -> switch statement is used to choose one block of code from multiple options based on the value of a variable.

//It works like a cleaner alternative to many if-else if conditions.

/*
switch(variable)
{
    case value1:
        // code
        break; 
        //(break stops execution after a matching case. Without break, execution continues into the next cases.)

    case value2:
        // code
        break;

    case value3:
        // code
        break;

    default:
        // code if no case matches
}
*/

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    while(true)
    {
        cout << "\n===== CALCULATOR =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        // Exit condition
        if(choice == 6)
        {
            cout << "Calculator Closed.\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch(choice)
        {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if(num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Division by zero is not allowed.\n";
                break;

            case 5:
                cout << "Result = " << (int)num1 % (int)num2 << endl;
                break;

            default:
                cout << "Invalid Choice.\n";
        }
    }

    return 0;
}

/*
OUTPUT:- 

===== CALCULATOR =====
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Exit
Enter your choice: 1
Enter first number: 5
Enter second number: 89
Result = 94

===== CALCULATOR =====
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Exit
Enter your choice: 6
Calculator Closed.

*/