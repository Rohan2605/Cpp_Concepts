/*
All the pattern questions are taken strivers must do patterns

https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa

*/

/*
Question 1:

*****
*****
*****
*****
*****

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/*
Question 2:

*
**
***
****
*****

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/*
Question 3:

1
12
123
1234
12345

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/*
Question 4:

1
22
333
4444
55555

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/*
Question 5:

*****
****
***
**
*

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=5; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/*
Question 6:

12345
1234
123
12
1

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=5; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/*
Question 7:

    *    
   ***
  *****
 *******
*********

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int j=5; j>=i-1; j--){
//             cout<<" ";
//         }
//         for(int k=1; k<=(2*i)-1; k++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/*
Question 8:

*********
 *******
  *****
   ***
    *
    
*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=5; i>=1; i--){
//         for(int k=0; k<=5-i; k++){
//             cout<<" ";
//         }
//         for(int j=(2*i)-1; j>=1; j--){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/*
Question 9;

    *    
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int k=1; k<=5-i; k++){
//             cout<<" ";
//         }
//         for(int j=1; j<=(2*i)-1; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     for(int i=5; i>=1; i--){
//         for(int k=5-i; k>=1; k--){
//             cout<<" ";
//         }
//         for(int j=(2*i)-1; j>=1; j--){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 10

*
**
***
****
*****
****
***
**
*

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     for(int i = 4; i>=1; i--){
//         for(int j=i; j>=1; j--){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 11

1
01
101
0101
10101

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)) cout<<'0';
//             else cout<<'1';
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 12:

1      1
12    21
123  321
12344321

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<j;
//         }
//         for(int k=i*2; k<=(n*2); k++){
//             cout<<" ";
//         }
//         for(int l=i; l>=1; l--){
//             cout<<l;
//         }

//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 13:

1
23
456
78910
1112131415

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int count = 1;
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count<<" "; 
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 14

A
AB
ABC
ABCD
ABCDE

*/

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=1; i<=5; i++){
//         char ch = 'A';
//         for(int j=1; j<=i; j++){
//             cout<<ch;
//             ch += 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 15

ABCDE
ABCE
ABC
AB
A

*/

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=5; i>=1; i--){
//         char ch = 'A';
//         for(int j=1; j<=i; j++){
//             cout<<ch;
//             ch += 1;
//         }
//         cout<<endl;
//     }
// }


/*
Question 16;

A
BB
CCC
DDDD
EEEEE

*/

// #include<iostream>
// using namespace std;

// int main(){
    
    
//     char ch = 'A';
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch;
//         }
//         ch += 1;
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 17

   A
  ABA
 ABCBA
ABCDCBA  

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int n = 4;
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++){
//             cout<<" ";
//         }
//         for(int j=0; j<i; j++){
//             cout<<char('A' + j);
//         }
//         for(int j=i-2; j>=0; j--){
//             cout<<char('A' + j);
//         }
//         cout<<endl;

//     }
//     return 0;
// }


/*
Question 18:

E
D E
C D E
B C D E
A B C D E

*/


// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=5; i>=1; i--){
//         for(int j=i-1; j<=4; j++){
//             char ch = 'A'; // A -> 65

//             /* Logic behind this solving
//             ch+4
//             ch+3, ch+4
//             ch+2, ch+3, ch+4
//             ch+1, ch+2, ch+3, ch+4
//             ch+0, ch+1, ch+2, ch+3, ch+4
//             */

//             ch += j;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 19:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int n = 5;

//     for (int  i = 1; i <= n; i++){
//         for(int j=n-i; j>=0; j--){
//             cout<<"*";
//         }
//         for(int k=0; k<(i-1)*2; k++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>=0; j--){
//             cout<<"*";
//         }        cout<<endl;
//     }

//     for (int  i = n; i >= 1; i--){
//         for(int j=n-i; j>=0; j--){
//             cout<<"*";
//         }
//         for(int k=0; k<(i-1)*2; k++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>=0; j--){
//             cout<<"*";
//         }        cout<<endl;
//     }
    

//    return 0;

// }


/*
Question 20:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int n = 5;

//     for(int i=n; i>=1; i--){
//         for(int j=n-i; j>=0; j--){
//             cout<<"*";
//         }
//         for(int k=0; k<(i-1)*2; k++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>=0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=1; i<=n; i++){
//         for(int j=n-i; j>0; j--){
//             cout<<"*";
//         }
//         for(int k=0; k<(i)*2; k++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;

// }


/*
Question 21

****
*  *
*  *
****

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==0 || i==n-1 || j == 0 || j == n-1){
//                 cout<<'*';
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
Question 22

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

/*
The value at each position depends on its minimum distance from any border.

For a 7 x 7 matrix:

outer layer → 4
next layer → 3
next layer → 2
center → 1

So for every cell (i, j):
find: min(i, j, n-1-i, n-1-j) // this tells which layer the cell belongs

Then: value = centerValue - layer;

*/

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

//     int n = 7;
//     int center = (7/2) + 1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             int mini = min(min(i,j), min(n-1-i, n-1-j));
//             cout<<center - mini<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }