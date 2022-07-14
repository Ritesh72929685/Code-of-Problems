// Print the number form N to 1 using recursion
// Time Complexity = O(n)
// Auxilary Space = O(n)

#include<iostream>
using namespace std;

void printNto1(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    printNto1(n - 1);
}
int main(){

    int n = 5;
    printNto1(n);
    return 0;
}