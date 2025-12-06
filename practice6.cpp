#include<iostream>
using namespace std;
int main() {
    //count of digit numbers
    int n;
    cout<<"Enter anumber:";
    cin>>n;
    //int count=0;
    //while(n>10) {
       //n=n/10;
       // count++;
    //}
    //cout<<count;

//sum of digit number
//int sum=0;
//while(n>10) {
    //int lastdigit=n%10;
    //n/=10;
    //sum+=lastdigit;
//}
//cout<<sum;

//Reverse number
//int r=0;
//while(n>0) {
   //int lastdigit=n%10;
   // r*=10;
   // r+=lastdigit;
    //n/=10;
//}
//cout<<r;

//Factorial
int product=1;
for(int i=1;i<=n;i++){
    product*=i;
}
cout<<product;
}
