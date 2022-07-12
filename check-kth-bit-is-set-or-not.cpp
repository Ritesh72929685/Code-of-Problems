
// ********** Method 1 using left shift operator *********************

/*#include<iostream>
using namespace std;
void kthBit(int n, int k)
{
    if (( n & (1<<(k - 1))) != 0)
    {
        return 1;
    }
    else
    {
       return 0;
    }

}
int main()
{
    int n, k;
    cin>>n>>k;
    cout<<kthBit(n,k);
    return 0;
}*/

// **************Method 2 using Right shift operator *****************

/*
#include<iostream>
using namespace std;

bool kthBit(int n, int k)
{
    if((( n >> k) & 1 ) == 1)
    {
        return true;
    }
    
    return false;
   
}
int main(){
    int n, k;
    cin>>n>>k;
    cout<<kthBit(n,k);
    return 0;
}

*/

#include<iostream>
using namespace std;

void kthBitSetOrNot(int n , int k){
    if(((n >> (k - 1)) & 1) == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
int main(){
    int n = 13 , k = 3;
    kthBitSetOrNot(n,k);
    return 0;
}