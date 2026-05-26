/*
PAIR

A pair stores: two values together, possibly of different datatypes.

Very useful in:
 - graphs
 - maps
 - sorting
 - coordinate storage
 - competitive programming

Header File -> #include <utility> (or bits/stdc++.h)

Declaration -> pair<int,int> p;

Initialization Methods
    1. pair<int,int> p1 = {1,2};

    2. pair<int,int> p2(3,4);

    3. pair<int,int> p3 = make_pair(5,6);

---------------------------------------------------------------------------------

Functions of pair

1. make_pair(a,b) -> creates pair

    eg.- make_pair(10,20);

    Time Complexity - O(1)

1. make_pair(a,b) -> creates pair

    eg.- make_pair(10,20);

    Time Complexity - O(1)

3. second -> accesses second value

    eg.- p.second;

    Time Complexity - O(1)

3. second -> accesses second value

    eg.- p.second;

    Time Complexity - O(1)

5. == -> equality comparison

    eg.- p1 == p2;

    Time Complexity - O(1)

6. != -> checks inequality

    eg.- p1 != p2;

    Time Complexity - O(1)

7. < -> lexicographical comparison

    eg.- p1 < p2;

    Time Complexity - O(1)

8. > -> greater comparison

    eg.- p1 > p2;

    Time Complexity - O(1)

9. <= -> less than equal comparison

    eg.- p1 <= p2;

    Time Complexity - O(1)

10. >= -> greater than equal comparison

    eg.- p1 >= p2;

    Time Complexity - O(1)

-----------------------------------------------------------------------------------

Lexicographical Comparison

Pairs compare like dictionary order.(compares first, if same then second compares)

Example: (1,5) < (2,3)

because: 1 < 2

------------------------------------------------------------------------------------

Nested Pair: pair<int,pair<int,int>> p;
Access Nested Pair
   - p.second.first
   - p.second.second

Array of Pairs: pair<int,int> arr[5];

Vector of Pairs: vector<pair<int,int>> vp; (VERY important in DSA)

------------------------------------------------------------------------------------

push_back() vs emplace_back() in Pair

push_back() -> Creates pair first, then inserts.
eg.- vp.push_back({1,2}); or vp.push_back(make_pair(1,2));

emplace_back() -> Constructs pair directly inside vector.
eg.- vp.emplace_back(1,2);

Why emplace_back() Better?

push_back():- create object → copy/move into vector
emplace_back():- directly construct inside vector

So:
 - avoids extra copy
 - slightly faster
 - preferred in modern C++

-------------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include<utility>
using namespace std;

int main() {

    /*
    -----------------------------------
    Basic Pair
    -----------------------------------
    */

    pair<int,int> p1 = {10,20};

    cout << "p1 = "
         << p1.first
         << " "
         << p1.second
         << endl << endl;

    /*
    -----------------------------------
    make_pair()
    -----------------------------------
    */

    pair<int,int> p2 =
        make_pair(30,40);

    cout << "p2 = "
         << p2.first
         << " "
         << p2.second
         << endl << endl;

    /*
    -----------------------------------
    swap()
    -----------------------------------
    */

    swap(p1,p2);

    cout << "After swap:" << endl;

    cout << "p1 = "
         << p1.first
         << " "
         << p1.second
         << endl;

    cout << "p2 = "
         << p2.first
         << " "
         << p2.second
         << endl << endl;

    /*
    -----------------------------------
    Comparisons
    -----------------------------------
    */

    pair<int,int> a = {1,2};
    pair<int,int> b = {1,5};

    cout << "(1,2) == (1,5): "
         << (a == b)
         << endl;

    cout << "(1,2) != (1,5): "
         << (a != b)
         << endl;

    cout << "(1,2) < (1,5): "
         << (a < b)
         << endl;

    cout << "(1,2) > (1,5): "
         << (a > b)
         << endl << endl;

    /*
    -----------------------------------
    Nested Pair
    -----------------------------------
    */

    pair<int,pair<int,int>> np;

    np = {1,{2,3}};

    cout << "Nested Pair: "
         << np.first
         << " "
         << np.second.first
         << " "
         << np.second.second
         << endl << endl;

    /*
    -----------------------------------
    Array of Pairs
    -----------------------------------
    */

    pair<int,int> arr[3];

    arr[0] = {1,10};
    arr[1] = {2,20};
    arr[2] = {3,30};

    cout << "Array of Pairs:" << endl;

    for(int i=0; i<3; i++)
    {
        cout << arr[i].first
             << " "
             << arr[i].second
             << endl;
    }

    cout << endl;

    /*
    -----------------------------------
    Vector of Pairs
    -----------------------------------
    */

    vector<pair<int,int>> vp;

    vp.push_back({1,2});

    vp.emplace_back(3,4);

    cout << "Vector of Pairs:" << endl;

    for(auto x : vp)
    {
        cout << x.first
             << " "
             << x.second
             << endl;
    }

    cout << endl;

    /*
    -----------------------------------
    Access Using auto
    -----------------------------------
    */

    auto p = make_pair(100,200);

    cout << "Auto Pair: "
         << p.first
         << " "
         << p.second
         << endl;

    return 0;
}

/*

OUTPUT

p1 = 10 20

p2 = 30 40

After swap:
p1 = 30 40
p2 = 10 20

(1,2) == (1,5): 0
(1,2) != (1,5): 1
(1,2) < (1,5): 1
(1,2) > (1,5): 0

Nested Pair: 1 2 3

Array of Pairs:
1 10
2 20
3 30

Vector of Pairs:
1 2
3 4

Auto Pair: 100 200

*/