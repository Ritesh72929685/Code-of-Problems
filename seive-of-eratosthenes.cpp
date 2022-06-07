/*#include<iostream>
using namespace std;
void allPrime(int n)
{
    if(n >= 2)
    { cout<<2<<endl; }
    if( n >=3)
    { cout<<3<<endl; }
    for(int i = 5; i<=n; i = i+6)
    {
        if(n >= i)
        {cout<<i<<endl; }
        if(n >= (i+2))
        {cout<<(i+2)<<endl ;}
    }
}
int main()
{
    int n;
    cin>>n;
    allPrime(n);
    return 0;
}*/



/*#include<iostream>
#include<vector>
using namespace std;

void SieveOfEratosthenes(int n){
    vector <bool> isPrime( n+1 , true );
    for(int i= 2; i<=n ; i++)
    {
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j = i*i ; j<=n; j = j+i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    SieveOfEratosthenes(n);
    return 0;
}*/

 // TIME COMPLEXITY =  O(nloglog(n))
/*#include<iostream>
using namespace std;
void sieve(int n)
{
    bool isPrime[n+1] = {0};
    for(int i = 2; i<=n; i++)
    {
        if(isPrime[i]== 0)
        {
            cout<<i<<" ";
            for(int j = i*i; j<=n; j+=i)
            {
                isPrime[j] = 1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    sieve(n);
    return 0;
}*/

