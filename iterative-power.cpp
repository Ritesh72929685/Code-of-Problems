#include<iostream>
using namespace std;

// Time Complexity = O(logn)

int power(int x ,int n){
    int res = 1;
    while(n > 0){
        if(n % 2 != 0){
            res *= x;
        }
        x *= x;
        n /= 2;
    }
    return res;
}
int main(){
    int x = 4 , n = 5;
    cout<<power(x,n);
    return 0;
}
