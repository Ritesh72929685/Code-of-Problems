#include<iostream>
using namespace std;

// Efficient Approach
//Time Complexity = O((n)^1/2) or Square Root of n
// In this approach the divisors are not printed in sorted ordrer

void allDivisors(int n){
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
            if(i != n / i){
                cout << n / i << " ";
            }
        }
    }
}
int main(){
    int n = 404;
    allDivisors(n);
    return 0;
}

#include<iostream>
using namespace std;

// More Efficient Approach
// In this approach the divisors are printed in sorted ordrer
// Time Complexity = O(sqrt(n))  // sqrt = squart root 

void allDivisors(int n){
    int i;
    for(i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    for( ; i >= 1; i--){
        if(n % i == 0){
            cout << n/i << " ";
        }
    }
}
int main(){
    int n = 404;
    allDivisors(n);
    return 0;
}