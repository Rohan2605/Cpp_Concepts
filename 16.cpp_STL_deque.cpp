/*
DEQUE:- 

Deque stands for: Double Ended Queue

It allows:
 - insertion/deletion from front
 - insertion/deletion from back , efficiently.

Header File -> #include <deque>

Declaration -> deque<int> dq;

--------------------------------------------------------------------------------------

1. push_back(value) -> inserts element at back

    eg.- dq.push_back(10);

    Time Complexity - O(1)

2. push_front(value) -> inserts element at front

    eg.- dq.push_front(5);

    Time Complexity - O(1)

3. pop_back() -> removes last element

    eg.- dq.pop_back();

    Time Complexity - O(1)

4. pop_front() -> removes first element

    eg.- dq.pop_front();

    Time Complexity - O(1)

5. front() -> returns first element

    eg.- dq.front();

    Time Complexity - O(1)

6. back() -> returns last element

    eg.- dq.back();

    Time Complexity - O(1)

7. size() -> returns number of elements

    eg.- dq.size();

    Time Complexity - O(1)

8. empty() -> checks whether deque is empty

    eg.- dq.empty();

    Time Complexity - O(1)

9. insert(position, value) -> inserts element at given position

    eg.- dq.insert(dq.begin()+2, 100);

    Time Complexity - O(N)

10. erase(position) -> removes element from given position

    eg.- dq.erase(dq.begin()+1);

    Time Complexity - O(N)

11. clear() -> removes all elements

    eg.- dq.clear();

    Time Complexity - O(N)

12. at(index) -> accesses element with bounds checking

    eg.- dq.at(2);

    Time Complexity - O(1)

13. [index] -> direct element access

    eg.- dq[2];

    Time Complexity - O(1)

 */

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq = {1,2,3,4};

    /*
    -----------------------------------
    push_back()
    -----------------------------------
    */

    dq.push_back(10);

    cout << "After push_back(): ";

    for(int x : dq)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    push_front()
    -----------------------------------
    */

    dq.push_front(0);

    cout << "After push_front(): ";

    for(int x : dq)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    pop_back()
    -----------------------------------
    */

    dq.pop_back();

    cout << "After pop_back(): ";

    for(int x : dq)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    pop_front()
    -----------------------------------
    */

    dq.pop_front();

    cout << "After pop_front(): ";

    for(int x : dq)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    front() and back()
    -----------------------------------
    */

    cout << "Front element: "
         << dq.front()
         << endl;

    cout << "Back element: "
         << dq.back()
         << endl << endl;

    /*
    -----------------------------------
    size()
    -----------------------------------
    */

    cout << "Size: "
         << dq.size()
         << endl << endl;

    /*
    -----------------------------------
    at()
    -----------------------------------
    */

    cout << "Element at index 2 using at(): "
         << dq.at(2)
         << endl << endl;

    /*
    -----------------------------------
    []
    -----------------------------------
    */

    cout << "Element at index 1 using []: "
         << dq[1]
         << endl << endl;

    /*
    -----------------------------------
    insert()
    -----------------------------------
    */

    dq.insert(dq.begin()+2, 100);

    cout << "After insert(): ";

    for(int x : dq)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    erase()
    -----------------------------------
    */

    dq.erase(dq.begin()+2);

    cout << "After erase(): ";

    for(int x : dq)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    empty()
    -----------------------------------
    */

    cout << "Is deque empty?: "
         << dq.empty()
         << endl << endl;

    /*
    -----------------------------------
    clear()
    -----------------------------------
    */

    dq.clear();

    cout << "After clear(), size = "
         << dq.size()
         << endl;

    return 0;
}

/*

OUTPUT:- 

After push_back(): 1 2 3 4 10 

After push_front(): 0 1 2 3 4 10 

After pop_back(): 0 1 2 3 4 

After pop_front(): 1 2 3 4 

Front element: 1
Back element: 4

Size: 4

Element at index 2 using at(): 3

Element at index 1 using []: 2

After insert(): 1 2 100 3 4 

After erase(): 1 2 3 4 

Is deque empty?: 0

After clear(), size = 0

*/