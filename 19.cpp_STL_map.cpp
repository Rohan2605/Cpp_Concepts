/*
SET

A set is an STL container that stores: unique elements only

Automatically keeps them: sorted

Header File -> #include <set>

Declaration -> set<int> st;

It uses red black tree so most operations take - O(log n)

----------------------------------------------------------------------------

Types of Sets

1. set
    Stores:
    - unique values
    - sorted order

    eg.- set<int> st;

2. unordered_set (Uses hash table.)
    Stores:
    - unique values
    - NO sorting

    eg.- unordered_set<int> st;

    [Average complexity: O(1)]

3. multiset

    Stores:
     - duplicate values allowed
     - sorted order

    eg.- multiset<int> ms;


Comparison

| Type          | Sorted | Duplicates | Complexity |
| ------------- | ------ | ---------- | ---------- |
| set           | yes    | not        | O(log n)   |
| unordered_set | not    | not        | O(1) avg   |
| multiset      | yes    | yes        | O(log n)   |

----------------------------------------------------------------------------

Functions:-

1. insert(value) -> inserts value

    eg.- st.insert(10);

    Time Complexity - O(log n)

2. erase(value) -> removes value

    eg.- st.erase(10);

    Time Complexity - O(log n)

3. find(value) -> returns iterator

    eg.- st.find(5);

    Time Complexity - O(log n)

4. count(value) -> checks existence

    eg.- st.count(5);

    Time Complexity - O(log n)

5. size() -> returns size

    eg.- st.size();

    Time Complexity - O(1)

6. empty() -> checks if empty

    eg.- st.empty();

    Time Complexity - O(1)

7. clear() -> removes all elements

    eg.- st.clear();

    Time Complexity - O(n)

8. begin() -> iterator to first element

    eg.- st.begin();

    Time Complexity - O(1)

9. end() -> iterator after last element

    eg.- st.end();

    Time Complexity - O(1)

10. lower_bound(value) [first element >= value]

    eg.- st.lower_bound(4);

    Time Complexity - O(log n)

11. upper_bound(value) [first element > value]

    eg.- st.upper_bound(4);

    Time Complexity - O(log n)

--------------------------------------------------------------------------

Important Notes:-

Duplicate Insertion Ignored
set<int> st;

st.insert(1);
st.insert(1);

Still stores: only one 1
------------------------------

Elements Always Sorted
set<int> st = {5,1,3};

Stored as: 1 3 5
------------------------------

Traversing Set
for(int x : st)
{
    cout << x << " ";
}

*/

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {

    set<int> st;

    /*
    -----------------------------------
    insert()
    -----------------------------------
    */

    st.insert(10);
    st.insert(5);
    st.insert(20);
    st.insert(10);

    cout << "After insert():" << endl;

    for(int x : st)
    {
        cout << x << " ";
    }

    cout << endl << endl;

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
    count()
    -----------------------------------
    */

    cout << "Count of 10: "
         << st.count(10)
         << endl << endl;

    /*
    -----------------------------------
    find()
    -----------------------------------
    */

    auto it = st.find(5);

    if(it != st.end())
    {
        cout << "5 Found"
             << endl << endl;
    }

    /*
    -----------------------------------
    erase()
    -----------------------------------
    */

    st.erase(10);

    cout << "After erase(10):" << endl;

    for(int x : st)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    /*
    -----------------------------------
    lower_bound()
    -----------------------------------
    */

    auto lb = st.lower_bound(6);

    if(lb != st.end())
    {
        cout << "Lower Bound of 6: "
             << *lb
             << endl << endl;
    }

    /*
    -----------------------------------
    upper_bound()
    -----------------------------------
    */

    auto ub = st.upper_bound(5);

    if(ub != st.end())
    {
        cout << "Upper Bound of 5: "
             << *ub
             << endl << endl;
    }

    /*
    -----------------------------------
    begin() and end()
    -----------------------------------
    */

    cout << "Traversal using iterators:" << endl;

    for(auto it = st.begin();
        it != st.end();
        it++)
    {
        cout << *it << " ";
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
    clear()
    -----------------------------------
    */

    st.clear();

    cout << "After clear(), size = "
         << st.size()
         << endl;

    return 0;
}

/*

OUTPUT:-

After insert():
5 10 20 

Size: 3

Count of 10: 1

5 Found

After erase(10):
5 20 

Lower Bound of 6: 20

Upper Bound of 5: 20

Traversal using iterators:
5 20 

Is Empty?: 0

After clear(), size = 0

*/