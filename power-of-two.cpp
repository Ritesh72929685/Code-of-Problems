
/*
//********** Naive Approach ************
//Time Complexity = O(logn)

#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    if(n == 0){
        return false;
    }
    while(n != 1){
        if(n % 2 != 0)
        {
            return false;
        }
        n = n >> 1; // n /= 2;
    }
    return true;
}
int main(){

    int n = 116;
    cout << powerOfTwo(n);
    return 0;
}
*/

/*
// ****** Method 2 ***********
// ********* Using Brian Kernighan's algorithm(count set bit in an interger)
// Time Complexity = O(logn)

#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    if(n == 0){
        return false;
    }
    return ((n & (n - 1)) == 0);
}
int main(){

    int n = 16;
    cout << powerOfTwo(n);
    return 0;
}
*/

//******** Method 3 *********

// Take the log with base 2 of the given no.
// if you get an integer then the given no. is power
// of 2 else not

// Time Complexity = O(1)


#include<iostream>
#include<cmath>
using namespace std;

bool powerOfTwo(int n){
    if(n == 0){
        return false;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}
int main(){

    int n = 16;
    cout << powerOfTwo(n);
    return 0;
}
