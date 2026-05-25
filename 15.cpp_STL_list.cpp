/*
LIST:-

A list in C++ STL is a: Doubly Linked List

Unlike vector:
 - elements are NOT stored contiguously
 - insertion/deletion is very fast
 - random access is slow

Header File -> #include <list>

Declaration -> list<int> l;

-------------------------------------------------------------------------------------

FUNCTIONS:-

1. push_back(value) -> inserts element at back

    eg.- l.push_back(10);

    Time Complexity - O(1)

2. push_front(value) -> inserts element at front

    eg.- l.push_front(5);

    Time Complexity - O(1)

3. pop_back() -> removes last element

    eg.- l.pop_back();

    Time Complexity - O(1)

4. pop_front() -> removes first element

    eg.- l.pop_front();

    Time Complexity - O(1)

5. front() -> returns first element

    eg.- l.front();

    Time Complexity - O(1)

6. back() -> returns last element

    eg.- l.back();

    Time Complexity - O(1)

7. size() -> returns number of elements

    eg.- l.size();

    Time Complexity - O(1)

8. empty() -> checks if list is empty

    eg.- l.empty();

    Time Complexity - O(1)

9. clear() -> removes all elements

    eg.- l.clear();

    Time Complexity - O(N)

10. insert(position, value) -> inserts at given position

    eg.- l.insert(it, 100);

    Time Complexity - O(1)

11. erase(position) -> removes element at given position

    eg.- l.erase(it);

    Time Complexity - O(1)

12. remove(value) -> removes all occurrences of value

    eg.- l.remove(10);

    Time Complexity - O(N)

13. reverse() -> reverses the list

    eg.- l.reverse();

    Time Complexity - O(N)

14. sort() -> sorts the list

    eg.- l.sort();

    Time Complexity - O(N log N)

15. unique() -> removes consecutive duplicates

    eg.- l.unique();

    Time Complexity - O(N)

16. merge(list2) -> merges two sorted lists

    eg.- l1.merge(l2);

    Time Complexity - O(N)

17. splice(position, list2) -> transfers elements from one list to another

    eg.- l1.splice(it, l2);

    Time Complexity - O(1)

18. begin() -> iterator to first element

    eg.- l.begin();

    Time Complexity - O(1)

19. end() -> iterator after last element

    eg.- l.end();

    Time Complexity - O(1)

20. rbegin() -> reverse iterator to last element

    eg.- l.rbegin();

    Time Complexity - O(1)

21. rend() -> reverse iterator before first element

    eg.- l.rend();

    Time Complexity - O(1)

--------------------------------------------------------------------------------------
*/

#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l = {1,2,3,4};

    /*
    -----------------------------------
    push_back()
    -----------------------------------
    */

    l.push_back(10);

    cout << "After push_back(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    push_front()
    -----------------------------------
    */

    l.push_front(0);

    cout << "After push_front(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    pop_back()
    -----------------------------------
    */

    l.pop_back();

    cout << "After pop_back(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    pop_front()
    -----------------------------------
    */

    l.pop_front();

    cout << "After pop_front(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    front() and back()
    -----------------------------------
    */

    cout << "Front element: "
         << l.front()
         << endl;

    cout << "Back element: "
         << l.back()
         << endl << endl;

    /*
    -----------------------------------
    size()
    -----------------------------------
    */

    cout << "Size: "
         << l.size()
         << endl << endl;

    /*
    -----------------------------------
    insert()
    -----------------------------------
    */

    auto it = l.begin();

    advance(it, 2);

    l.insert(it, 100);

    cout << "After insert(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    erase()
    -----------------------------------
    */

    it = l.begin();

    advance(it, 2);

    l.erase(it);

    cout << "After erase(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    reverse()
    -----------------------------------
    */

    l.reverse();

    cout << "After reverse(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    sort()
    -----------------------------------
    */

    l.sort();

    cout << "After sort(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    remove()
    -----------------------------------
    */

    l.remove(3);

    cout << "After remove(3): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    unique()
    -----------------------------------
    */

    l.push_back(4);
    l.push_back(4);

    l.unique();

    cout << "After unique(): ";

    for(int x : l)
        cout << x << " ";

    cout << endl << endl;

    /*
    -----------------------------------
    clear()
    -----------------------------------
    */

    l.clear();

    cout << "After clear(), size = "
         << l.size()
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

After insert(): 1 2 100 3 4 

After erase(): 1 2 3 4 

After reverse(): 4 3 2 1 

After sort(): 1 2 3 4 

After remove(3): 1 2 4 

After unique(): 1 2 4 

After clear(), size = 0

*/