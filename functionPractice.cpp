#include<iostream>
#include<cmath>
using namespace std;
//Prime numbers

//bool isPrime(int n) {
 //   if(n<=1)
 //   return false;
  //  for(int i=2;i*i<=n;i++) {
  //      if(n%i==0)
  //      return false;
   // }
   // return true;
//}

//void findPrimes(int l,int r) {
 //   bool found=false;
  // for(int i=l;i<=r;i++) {
    //    if(isPrime(i)) {
     //       cout<<i<<" ";
      //      found=true;
     //   }
    //}
    //if(!found) {
    //cout<<"No prime number found in the range:";

   // }
//}

//int main() {
//int l=10,r=30;

//findPrimes(l,r);

//Given a prime number N  . The task is to check if it is possible to express N  as sum of two separate prime numbers.
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i <=sqrt(n); i++)  
    { 
        if (n % i == 0) 
            return false; 
    } 
  
    return true; 
} 
bool isPossible(int N) 
{ 
    // if the number is prime, 
    // and number-2 is also prime // checking 13
    if (isPrime(N) && isPrime(N - 2)) 
        return true; 
    else
        return false; 
} 

int main() 
{ 
    int n = 13; 
  
    if (isPossible(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  return 0;
}