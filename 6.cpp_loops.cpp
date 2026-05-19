/*
Loops -> In C++, loops let you repeat a block of code multiple times

Types of loops -> Entry controlled (For, While) and Exit controlled (Do While)
------------------------------------------------------------------------------
1. FOR LOOP : best when no of iteration known

for(initialization; condition; update)
{
    // code
}
-------------------------------------------------------------------------------
2. WHILE LOOP : best for unknown iterations (infinite loop)

while(condition)
{
    // code
}
--------------------------------------------------------------------------------
3. DO-WHILE LOOP : Similar to while, but the loop body runs at least once 

do
{
    // code
}
while(condition);
---------------------------------------------------------------------------------

=> Break statement : Stops the loop immediately (to get out of loops for certain condition)

=> Continue statement : Skips the current iteration and moves to the next one

for(int i = 1; i <= 10; i++)
{
    if(i == 5)
        break;
    
    if(i==3)
        continue;

    cout << i << endl;
}
    //OUTPUT - 1 2 4
------------------------------------------------------------------------------------

=> NESTED LOOPS : a loop inside another loop

for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 2; j++)
    {
        cout << i << " " << j << endl;
    }
}
-------------------------------------------------------------------------------------

-> RANGE BASED 'FOR' LOOPS (Modern C++)

A range-based loop in C++ is a simpler way to loop through all elements of an array or container (like vectors, lists, etc.)

for(dataType variable : collection)
{
    // code
}

eg. ->  int arr[] = {1, 2, 3, 4};
        for(int x : arr)
        {
            cout << x << " ";
        }
*/

#include<iostream>
using namespace std;

int main(){

    //FOR LOOPS
    cout<<"FOR LOOPS"<<endl;
    for(int i=1; i<=10; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"-------------------------"<<endl;

    //WHILE LOOPS
    cout<<"WHILE LOOPS"<<endl;

    int j = 1;
    while(j<=10){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    cout<<"-------------------------"<<endl;

    //DO-WHILE LOOP
    cout<<"DO-WHILE LOOP"<<endl;

    int k = 1;
    do{
        cout<<k<<" ";
        k++;
    }while(k<=10);
    cout<<endl;
    cout<<"-------------------------"<<endl;

    //Break and continue statement
    cout<<"BREAK AND CONTINUE"<<endl;
    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
            break;
        
        if(i==3)
            continue;

        cout <<i<<" ";
    }
    cout<<endl;
    cout<<"-------------------------"<<endl;

    //NESTED LOOPS
    cout<<"NESTED LOOPS"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<i<<" "<<j<<endl;
        }
    }
    cout<<"-------------------------"<<endl;

    //RANGE BASED LOOPS
    cout<<"RANGE BASED LOOPS"<<endl;
    int arr[] = {1, 2, 3, 4, 5};

    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"-------------------------"<<endl;


    return 0;
}

/*

OUTPUT:-

FOR LOOPS
1 2 3 4 5 6 7 8 9 10 
-------------------------
WHILE LOOPS
1 2 3 4 5 6 7 8 9 10 
-------------------------
DO-WHILE LOOP
1 2 3 4 5 6 7 8 9 10 
-------------------------
BREAK AND CONTINUE
1 2 4 
-------------------------
NESTED LOOPS
0 0
0 1
0 2
1 0
1 1
1 2
2 0
2 1
2 2
-------------------------
RANGE BASED LOOPS
1 2 3 4 5 
-------------------------

*/
