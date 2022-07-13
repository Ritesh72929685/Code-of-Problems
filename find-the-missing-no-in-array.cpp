
// ********** NAIVE SOLUTION *************************
// But for long n this code will overflow and give garbage value so this is not efficient solution 
/*
#include<bits/stdc++.h>
using namespace std;
int missingNo(int arr[] , int n)
{
    int total = (n+1)*(n+2)/2;
    for(int i = 0; i<n; i++)
    {
        total -= arr[i];
    }
    return total;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<missingNo(arr,n);
    return 0;

}

*/


// *******Find the missing number in an array **************
// Using XOR Approach -> first taking the XOR of all the no. in the given range
// then taking the XOR of all the elements in the array.
// Now taking the XOR of both the above result for final result
// {1 , 2 , 3 , 4 , 5} ^ {2 , 1 , 5 , 3} -> 4 as output because 1 2 3 and 5 will 
// cancle out each other by the properties of XOR ( a ^ a = 0).

// Time Complexity = O(n) 

#include<iostream>
using namespace std;

int findMissingNumber(int arr[] , int n){
    int count = 1;
    int res = arr[0];
    for(int i = 2 ; i <= n + 1; i++){
        count = count ^ i;
    }
    for(int i = 1; i < n; i++){
        res = res ^ arr[i];
    }
    return (count ^ res);
}
int main(){
    int arr[] = {2 , 5 , 3 , 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findMissingNumber(arr , n);
    return 0;
}