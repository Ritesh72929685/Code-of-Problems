
// ********* Naive Approach **********
// Time Complexity = O(Total Bit in N)

/*
#include<iostream>
using namespace std;

int countSetBit(int n){
    int res = 0;
    while( n > 0){
        if(n % 2 != 0){
            res++;
        }
        n = n >> 1; // n = n / 2;
    }
    return res;
}

int main(){
    int n = 13;
    cout << countSetBit(n);
    return 0;
}
*/


// ********* Method 2 *************
// Brain Kerningam's Algorithm
// Time Complexity = O(Set Bit count)

#include<iostream>
using namespace std;

int countSetBit(int n){
    int res = 0;
    while(n > 0){
        // if we do AND with (n - 1) then it set all the right bits 0 from the 1st set bit 1 
        // that is - if n = 13 -> 1 1 0 1
        // after performing (n - 1) & n  it will replace the last bit to 0.
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main(){
    int n = 13;
    cout << countSetBit(n);
    return 0;
}
