/*
VECTORS:-

A vector is a dynamic array in C++ STL.

Unlike normal arrays:
 - size can grow/shrink dynamically
 - elements stored contiguously in memory
 - fast random access

------------------------------------------------------------------------------------------

Header File -> #include <vector>

Declaration -> vector<int> v;

Initialization ->   vector<int> v = {1,2,3}; // intialize value with 1,2,3 values
                    vector<int> v(5); // create a vector of size 5 and all values 0
                    vector<int> v(5,10); // create a vector of size 5 and all values 10

------------------------------------------------------------------------------------------

FUNCTION OF VECTORS:-

1. push_back(value) - pushes elements in the back of vector

    eg.- v.push_back(10);

    Time Complexity - O(1) [AVERAGE], O(N) [WORST(resize)]


2. pop_back() -> removes last element

    eg.- v.pop_back();

    Time Complexity - O(1)


3. size() -> returns number of elements in vector

    eg.- v.size();

    Time Complexity - O(1)


4. capacity() -> returns current allocated capacity

    eg.- v.capacity();

    Time Complexity - O(1)


5. empty() -> checks whether vector is empty or not

    eg.- v.empty();

    Time Complexity - O(1)


6. clear() -> removes all elements from vector

    eg.- v.clear();

    Time Complexity - O(N)


7. front() -> returns first element

    eg.- v.front();

    Time Complexity - O(1)


8. back() -> returns last element

    eg.- v.back();

    Time Complexity - O(1)


9. at(index) -> accesses element with bounds checking

    eg.- v.at(2);

    Time Complexity - O(1)


10. [index] -> accesses element directly

    eg.- v[2];

    Time Complexity - O(1)


11. insert(position, value) -> inserts element at given position

    eg.- v.insert(v.begin()+2, 100);

    Time Complexity - O(N)


12. erase(position) -> removes element from given position

    eg.- v.erase(v.begin()+1);

    Time Complexity - O(N)


13. begin() -> returns iterator to first element

    eg.- v.begin();

    Time Complexity - O(1)


14. end() -> returns iterator after last element

    eg.- v.end();

    Time Complexity - O(1)


15. rbegin() -> returns reverse iterator to last element

    eg.- v.rbegin();

    Time Complexity - O(1)


16. rend() -> returns reverse iterator before first element

    eg.- v.rend();

    Time Complexity - O(1)


17. resize(size) -> changes size of vector

    eg.- v.resize(10);

    Time Complexity - O(N)


18. reserve(size) -> increases capacity of vector

    eg.- v.reserve(100);

    Time Complexity - O(N)


19. swap(v2) -> swaps contents of two vectors

    eg.- v1.swap(v2);

    Time Complexity - O(1)


20. assign(count, value) -> assigns new values to vector

    eg.- v.assign(5, 10);

    Time Complexity - O(N)


21. emplace_back(value) -> constructs element directly at end

    eg.- v.emplace_back(10);

    Time Complexity - O(1) [AVERAGE]


22. emplace(position, value) -> constructs element at given position

    eg.- v.emplace(v.begin()+1, 50);

    Time Complexity - O(N)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5};

    /*
    -----------------------------------
    push_back()
    -----------------------------------
    */

    v.push_back(10);

    cout << "After push_back(10): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    pop_back()
    -----------------------------------
    */

    v.pop_back();

    cout << "After pop_back(): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    size()
    -----------------------------------
    */

    cout << "Size of vector: "
         << v.size()
         << endl << endl;

    /*
    -----------------------------------
    capacity()
    -----------------------------------
    */

    cout << "Capacity of vector: "
         << v.capacity()
         << endl << endl;

    /*
    -----------------------------------
    empty()
    -----------------------------------
    */

    cout << "Is vector empty?: "
         << v.empty()
         << endl << endl;

    /*
    -----------------------------------
    front()
    -----------------------------------
    */

    cout << "Front element: "
         << v.front()
         << endl << endl;

    /*
    -----------------------------------
    back()
    -----------------------------------
    */

    cout << "Back element: "
         << v.back()
         << endl << endl;

    /*
    -----------------------------------
    at()
    -----------------------------------
    */

    cout << "Element at index 2 using at(): "
         << v.at(2)
         << endl << endl;

    /*
    -----------------------------------
    []
    -----------------------------------
    */

    cout << "Element at index 1 using []: "
         << v[1]
         << endl << endl;

    /*
    -----------------------------------
    insert()
    -----------------------------------
    */

    v.insert(v.begin()+2, 100);

    cout << "After insert(): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    erase()
    -----------------------------------
    */

    v.erase(v.begin()+2);

    cout << "After erase(): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    resize()
    -----------------------------------
    */

    v.resize(8);

    cout << "After resize(8): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    reserve()
    -----------------------------------
    */

    v.reserve(20);

    cout << "Capacity after reserve(20): "
         << v.capacity()
         << endl << endl;

    /*
    -----------------------------------
    assign()
    -----------------------------------
    */

    v.assign(5, 7);

    cout << "After assign(5,7): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    emplace_back()
    -----------------------------------
    */

    v.emplace_back(50);

    cout << "After emplace_back(50): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    emplace()
    -----------------------------------
    */

    v.emplace(v.begin()+1, 99);

    cout << "After emplace(): ";

    for(int x : v)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    begin() and end()
    -----------------------------------
    */

    cout << "Traversal using begin() and end(): ";

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl << endl;

    /*
    -----------------------------------
    rbegin() and rend()
    -----------------------------------
    */

    cout << "Reverse traversal: ";

    for(auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }

    cout << endl << endl;

    /*
    -----------------------------------
    data()
    -----------------------------------
    */

    int* ptr = v.data();

    cout << "First element using data(): "
         << *ptr
         << endl << endl;

    /*
    -----------------------------------
    clear()
    -----------------------------------
    */

    v.clear();

    cout << "After clear(), size = "
         << v.size()
         << endl;

    return 0;
}

/*

OUTPUT:-

After push_back(10): 1 2 3 4 5 10

After pop_back(): 1 2 3 4 5

Size of vector: 5

Capacity of vector: 8

Is vector empty?: 0 //i.e. NOT EMPTY

Front element: 1

Back element: 5

Element at index 2 using at(): 3

Element at index 1 using []: 2

After insert(): 1 2 100 3 4 5

After erase(): 1 2 3 4 5

After resize(8): 1 2 3 4 5 0 0 0

Capacity after reserve(20): 20

After assign(5,7): 7 7 7 7 7

After emplace_back(50): 7 7 7 7 7 50

After emplace(): 7 99 7 7 7 7 50

Traversal using begin() and end(): 7 99 7 7 7 7 50

Reverse traversal: 50 7 7 7 7 99 7

First element using data(): 7

After clear(), size = 0

*/