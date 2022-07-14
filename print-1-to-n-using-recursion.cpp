// ********** Print 1 to N number using recursion ***************
// Time Complexity = O(n)
// Auxilary Space = O(n)

#include<iostream>
using namespace std;

void print1toN(int n){
    if(n == 0){
        return;
    }
    print1toN(n - 1);
    cout << n << endl;
}
int main(){

    int n = 5;
    print1toN(n);
    return 0;
}