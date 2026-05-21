/*
Lambda Function in C++ is an anonymous function — a function without a name.

It is mainly used for:
 - short temporary functions
 - STL algorithms
 - custom sorting
 - cleaner code

 Basic syntax

    [capture](parameters) -> return_type
    {
        // code
    };

    eg - #include <iostream>
        using namespace std;

        [](int a, int b)
        {
            return a + b;
        }
        
    | Part             | Meaning        |
    | ---------------- | -------------- |
    | `[]`             | Capture clause |
    | `(int a, int b)` | Parameters     |
    | `return a+b`     | Function body  |


-----------------------------------------------------------------------------------

=> CAPTURE CLAUSE
The most important part. Lambdas can access variables outside them using captures.

1. Capture by value -> copies variable, changes inside lambda do not affect original variable

eg.- int x = 10;
    auto show = [=]()
    {
        cout << x;
    };
    //output - 10

2. Capture by reference -> uses original variable, changes occur to it

eg.- int x = 10;
    auto change = [&]()
    {
        x = 20;
    };

    change();

    cout << x;
    // output - 20

3. Capture specific variable - [x] or [&x]

------------------------------------------------------------------------------------

=> MUTABLE LAMBDA: normally value-captured variables are read only, use mutable to modify variables

eg. -int x = 10;

    auto fun = [x]() mutable
    {
        x++;
        cout << x;
    };

    fun();

---------------------------------------------------------------------------------

Important Notes:-
 - Lambdas are objects internally
 - Stored using auto
 - Can capture variables
 - Mostly used with STL

*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    //Anonymous void greeting function
    [](){cout<<"Greetings of the day \n";}();

    //Anonymous square function with a return value
    cout<<[](int a){return a*a;}(3)<<endl;

    //Giving a name to lambda function using auto
    auto sum = [](int a, int b){return a+b;};
    cout<<sum(3,7)<<endl;


    // USES IN STL FUNCTIONS --------------------------------------------

    vector<int> nums1 = {54, 26, 32, 84, 15};
    vector<int> nums2 = {54, 26, 32, 84, 15};

    // sorts in ascending order 
    sort(nums1.begin(), nums1.end());
    for(auto x: nums1){
        cout<<x<<" ";
    }
    cout<<endl;

    // sorts in descending order using a lambda function
    sort(nums2.begin(), nums2.end(), [](int a, int b){ return a>b; });
    for(auto x: nums2){
        cout<<x<<" ";
    }
    cout<<endl;

    //For_each used to print the numbers in a vector
    vector<int> nums= {1,2,3,4,5};
    for_each(nums.begin(), nums.end(), [](int a){cout<<a<<" ";});
    cout<<endl;
    
    //count even or out using lambda function in count_if()
    int cntEven = count_if(nums.begin(), nums.end(), [](int a){ return a%2==0 ;});
    int cntOdd = count_if(nums.begin(), nums.end(), [](int a){ return a%2!=0 ;});
    cout<<"Even no: "<<cntEven<<" ,Odd no: "<<cntOdd<<endl;

    //Removing odd elements from a vector using erase and remove_if through lambda function
    nums.erase(remove_if(nums.begin(), nums.end(),  [](int a){ return a%2 != 0;}),nums.end());
    for(int x: nums){
        cout<<x<<" ";
    }
    
    return 0;
}