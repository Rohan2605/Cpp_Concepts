/*
STACK

A stack is an STL container that follows: LIFO

meaning: Last In First Out

Example: stack of plates, Last plate inserted - removed first

Header File -> #include <stack>
Declaration -> stack<int> st;

-------------------------------------------------------------------------------

Internal Working

By default stack uses:- deque internally.

Can also use:
- vector
- list

-------------------------------------------------------------------------------

Stack Visualization
Suppose:

st.push(10);
st.push(20);
st.push(30);

Stack becomes:

TOP -> 30
       20
       10

-------------------------------------------------------------------------------

FUNCTION:-

1. push(value) -> inserts element at top

    eg.- st.push(10);

    Time Complexity - O(1)

2. pop() -> removes top element

    eg.- st.pop();

    Time Complexity - O(1)

3. top() -> returns top element

    eg.- st.top();

    Time Complexity - O(1)

4. size() -> returns number of elements

    eg.- st.size();

    Time Complexity - O(1)

5. empty() -> checks if stack is empty

    eg.- st.empty();

    Time Complexity - O(1)

-----------------------------------------------------------------------------

Important Notes
=> No Iterators - Unlike vector/set/map:- stack cannot be traversed directly

No -> begin(), end()

because stack only allows: top access

=> To Traverse Stack - Need:- pop elements one by one

Example
while(!st.empty())
{
    cout << st.top() << " ";
    st.pop();
}

*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    /*
    -----------------------------------
    push()
    -----------------------------------
    */

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "After push():" << endl;

    stack<int> temp1 = st;

    while(!temp1.empty())
    {
        cout << temp1.top() << " ";

        temp1.pop();
    }

    cout << endl << endl;

    /*
    -----------------------------------
    top()
    -----------------------------------
    */

    cout << "Top Element: "
         << st.top()
         << endl << endl;

    /*
    -----------------------------------
    size()
    -----------------------------------
    */

    cout << "Size: "
         << st.size()
         << endl << endl;

    /*
    -----------------------------------
    pop()
    -----------------------------------
    */

    st.pop();

    cout << "After pop():" << endl;

    stack<int> temp2 = st;

    while(!temp2.empty())
    {
        cout << temp2.top() << " ";

        temp2.pop();
    }

    cout << endl << endl;

    /*
    -----------------------------------
    empty()
    -----------------------------------
    */

    cout << "Is Empty?: "
         << st.empty()
         << endl << endl;

    /*
    -----------------------------------
    Removing All Elements
    -----------------------------------
    */

    while(!st.empty())
    {
        st.pop();
    }

    cout << "After removing all elements:" << endl;

    cout << "Is Empty?: "
         << st.empty()
         << endl;

    return 0;
}
/*

OUTPUT

After push():
30 20 10 

Top Element: 30

Size: 3

After pop():
20 10 

Is Empty?: 0

After removing all elements:
Is Empty?: 1

*/