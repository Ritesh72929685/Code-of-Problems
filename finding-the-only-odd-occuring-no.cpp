
//Finding the only odd occuring number 

// Using Bit XOR Approach
// XOR properities : a ^ a gives 0
// Time Complexity = O(n)

#include<iostream>
using namespace std;

int findOddAppearance(int arr[] , int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    return res;
}
int main(){

    int arr[] = {4 , 4 , 3 , 7 , 5 , 5 ,5 , 3 , 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findOddAppearance(arr, n);
    return 0;
}

/*
//********** Hashing Approach *********
// Time Complexity = O(n)

#include<iostream>
#include<unordered_map>
using namespace std;

int oddAppearance(int arr[] , int n){
    unordered_map<int , int> m;
    for(int i = 0 ; i < n; i++){
        m[arr[i]]++;
    }
    for(auto it : m){
        if(it.second % 2 != 0){
            return it.first;
        }
    }
    return 0;
}
int main(){

    int arr[] = {4 , 4 , 3 , 5 , 5 , 5 ,5 , 3 , 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << oddAppearance(arr, n);
    return 0;
}
*/