/*
STL -> Standard Template Library

It is a powerful library in C++ that provides:
 - ready-made data structures
 - algorithms
 - iterators
 - utility functions

so you don't have to build everything from scratch.

Without STL:- you would manually create arrays, linked lists, sorting algorithms, etc.

With STL:- everything is already optimized and available.

Example:- sort(v.begin(), v.end()); //instead of writing full sorting algorithm

-----------------------------------------------------------------------------------------

MAIN COMPONENTS OF STL

It mainly has 4 parts:

| Component  | Purpose                     |
| ---------- | --------------------------- |
| Containers | Store data                  |
| Algorithms | Perform operations          |
| Iterators  | Traverse containers         |
| Functors   | Custom operations/functions |

------------------------------------------------------------------------------------------

1. CONTAINERS - stores data

Types of container:-

-> Sequence Container : stores data sequentially
    eg.- vector, list, deque, array

-> Associative Container : stores sorted dat
    eg.- set, multiset, map, multimap

-> Unordered Container : Hash table based
    eg.- unordered_set, unordered_map

-> Container Adaptor : Modified version of containers
    eg.- stack, queue, priority_queue

------------------------------------------------------------------------------------------

2. ALGORITHM - predefined functions {sort(), find(), reverse(), max_element(), min_element(), binary_search()}

    eg.- sort(v.begin(), v.end());

------------------------------------------------------------------------------------------

3. ITERATORS - used to traverse containers, like pointers
    eg.- vector<int>::iterator it;

    Common Iterators

    | Iterator   | Meaning            |
    | ---------- | ------------------ |
    | `begin()`  | First element      |
    | `end()`    | After last element |
    | `rbegin()` | Reverse begin      |
    | `rend()`   | Reverse end        |

------------------------------------------------------------------------------------------

4. FUNCTORS - A functor is an object that behaves like a function.

Normally we call functions like: add(2,3);

Functors allow: obj(2,3); //where obj is an object.

It is possible because of - 'operator()' which is function call operator.

eg.- #include <iostream>
    using namespace std;

    class Hello {
    public:
        void operator()()
        {
            cout << "Hello World";
        }
    };

    int main() {
        Hello h;
        h();
    }

STL uses functors everywhere

sort(v.begin(), v.end(), greater<int>()); // this one sorts the vector in descending order

here greater<int>() is a functor, Internally similar to:

class Greater {

public:

    bool operator()(int a, int b)
    {
        return a > b;
    }
};

we can also create our custom funtor

class Compare {

public:

    bool operator()(int a, int b)
    {
        return (a % 10) < (b % 10);
    }
};

sort(v.begin(), v.end(), compare()) // it sorts no based on last digit

-----------------------------------------------------------------------------------------

Headers Commonly Used
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

Or everything together:

#include <bits/stdc++.h> //(commonly used in competitive programming)

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Compare {

public:

    bool operator()(int a, int b)
    {
        return (a % 10) < (b % 10);
    }
};

int main(){

    /*
    ------------------------------------------------
                CONTAINER IN STL
    ------------------------------------------------
    */

    vector<int> v = {15, 11, 18, 1, 14};
    vector<int> vp = {45, 34, 27, 90, 78};
    map<int, int> mp = {{2,4}, {3,5}, {4,6}};

    /*
    ------------------------------------------------
                ITERATOR IN STL
    ------------------------------------------------
    */

    cout<<"Vector before sorting"<<endl;
    vector<int>::iterator it;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;

    cout<<"Map Values: "<<endl;
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    /*
    ------------------------------------------------
                ALGORITHMS IN STL
    ------------------------------------------------
    */    

    cout<<"Vector after sorting (ascending)"<<endl;
    sort(v.begin(), v.end());

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    /*
    ------------------------------------------------
                FUNCTORS IN STL
    ------------------------------------------------
    */

    cout<<"Vector after sorting (descending)"<<endl;
    sort(v.begin(), v.end(), greater<int>());

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Custom Comparator"<<endl;
    sort(vp.begin(), vp.end(), Compare());
    for(int i: vp){
        cout<<i<<" ";
    }

}

/*

OUTPUT:-

Vector before sorting
15 11 18 1 14 
Map Values: 
2 4
3 5
4 6
Vector after sorting (ascending)
1 11 14 15 18 
Vector after sorting (descending)
18 15 14 11 1 
Custom Comparator
90 34 45 27 78 

*/