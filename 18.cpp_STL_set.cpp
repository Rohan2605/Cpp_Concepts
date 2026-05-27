/*
MAPS

A map is an STL container that stores data in: key-value pairs

Example:

Roll No -> Name
1       -> Rohan

Keys are:
- unique
- automatically sorted

Header File -> #include <map>

Declaration -> map<int,string> mp;

It uses red black tree - so most operations take O(log n).

------------------------------------------------------------------------------------

Accessing Key and Value:-
    x.first
    x.second

Traversing Map:-

    for(auto x : mp)
    {
        cout << x.first
            << " "
            << x.second;
    }

------------------------------------------------------------------------------------

Types of Maps
1. map -> Sorted keys.
    eg.- map<int,int> mp;

2. unordered_map -> Hashmap implementation,NOT sorted.
    eg.- unordered_map<int,int> mp;

    Average complexity:O(1)

3. multimap -> Allows duplicate keys.
    eg.- multimap<int,int> mp;

Comparison

| Type          | Sorted | Duplicate Keys | Complexity |
| ------------- | ------ | -------------- | ---------- |
| map           | yes    | not            | O(log n)   |
| unordered_map | not    | not            | O(1) avg   |
| multimap      | yes    | yes            | O(log n)   |

---------------------------------------------------------------------------------

Functions:-

1. insert({key,value}) -> inserts pair

    eg.- mp.insert({1,"Rohan"});

    Time Complexity - O(log n)

2. [key] -> inserts/accesses value

    eg.- mp[1] = "Rohan";

    Time Complexity - O(log n)

3. at(key) -> accesses value

    eg.- mp.at(1);

    Time Complexity - O(log n)

4. find(key) -> returns iterator

    eg.- mp.find(1);

    Time Complexity - O(log n)

5. count(key) -> checks existence

    eg.- mp.count(1);

    Time Complexity - O(log n)

6. erase(key) -> removes key

    eg.- mp.erase(1);

    Time Complexity - O(log n)

7. size() -> returns size

    eg.- mp.size();

    Time Complexity - O(1)

8. empty() -> checks if empty

    eg.- mp.empty();

    Time Complexity - O(1)

9. clear() -> removes all elements

    eg.- mp.clear();

    Time Complexity - O(n)

10. begin() -> iterator to first element

    eg.- mp.begin();

    Time Complexity - O(1)

11. end() -> iterator after last element

    eg.- mp.end();

    Time Complexity - O(1)

12. lower_bound(key) [first key >= given key]

    eg.- mp.lower_bound(3);

    Time Complexity - O(log n)

13. upper_bound(key) [first key >= given key]

    eg.- mp.upper_bound(3);

    Time Complexity - O(log n)

*/

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    map<int,string> mp;

    /*
    -----------------------------------
    insert()
    -----------------------------------
    */

    mp.insert({1,"Rohan"});
    mp.insert({2,"Rahul"});

    cout << "After insert():" << endl;

    for(auto x : mp)
    {
        cout << x.first
             << " "
             << x.second
             << endl;
    }

    cout << endl;

    /*
    -----------------------------------
    []
    -----------------------------------
    */

    mp[3] = "Aman";

    cout << "After mp[3] insertion:" << endl;

    for(auto x : mp)
    {
        cout << x.first
             << " "
             << x.second
             << endl;
    }

    cout << endl;

    /*
    -----------------------------------
    at()
    -----------------------------------
    */

    cout << "mp.at(2): "
         << mp.at(2)
         << endl << endl;

    /*
    -----------------------------------
    find()
    -----------------------------------
    */

    auto it = mp.find(2);

    if(it != mp.end())
    {
        cout << "Key 2 Found: "
             << it->second
             << endl << endl;
    }

    /*
    -----------------------------------
    count()
    -----------------------------------
    */

    cout << "Count of key 1: "
         << mp.count(1)
         << endl << endl;

    /*
    -----------------------------------
    erase()
    -----------------------------------
    */

    mp.erase(2);

    cout << "After erase(2):" << endl;

    for(auto x : mp)
    {
        cout << x.first
             << " "
             << x.second
             << endl;
    }

    cout << endl;

    /*
    -----------------------------------
    size()
    -----------------------------------
    */

    cout << "Size: "
         << mp.size()
         << endl << endl;

    /*
    -----------------------------------
    empty()
    -----------------------------------
    */

    cout << "Is Empty?: "
         << mp.empty()
         << endl << endl;

    /*
    -----------------------------------
    lower_bound()
    -----------------------------------
    */

    auto lb = mp.lower_bound(2);

    if(lb != mp.end())
    {
        cout << "Lower Bound of 2: "
             << lb->first
             << endl << endl;
    }

    /*
    -----------------------------------
    upper_bound()
    -----------------------------------
    */

    auto ub = mp.upper_bound(1);

    if(ub != mp.end())
    {
        cout << "Upper Bound of 1: "
             << ub->first
             << endl << endl;
    }

    /*
    -----------------------------------
    begin() and end()
    -----------------------------------
    */

    cout << "Traversal using iterators:" << endl;

    for(auto it = mp.begin();
        it != mp.end();
        it++)
    {
        cout << it->first
             << " "
             << it->second
             << endl;
    }

    cout << endl;

    /*
    -----------------------------------
    clear()
    -----------------------------------
    */

    mp.clear();

    cout << "After clear(), size = "
         << mp.size()
         << endl;

    return 0;
}

/*

OUTPUT:-

After insert():
1 Rohan
2 Rahul

After mp[3] insertion:
1 Rohan
2 Rahul
3 Aman

mp.at(2): Rahul

Key 2 Found: Rahul

Count of key 1: 1

After erase(2):
1 Rohan
3 Aman

Size: 2

Is Empty?: 0

Lower Bound of 2: 3

Upper Bound of 1: 3

Traversal using iterators:
1 Rohan
3 Aman

After clear(), size = 0

*/