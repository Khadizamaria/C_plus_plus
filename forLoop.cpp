#include<iostream>
using namespace std;
int main () {
    
//for(int i=1;i<=10;i++) {
  //cout<<"Bangladesh"<<"i"<<endl;

//}

//Print the table of 19

//for(int i=19;i<=190;i++){
  //if(i%19==0)
  //cout<<i<<" ";
//}

//1,3,,5,7,9.....a+(n-1)d
int n;
cout<<"Enter n:";
cin>>n;
//for(int i=1;i<=2*n-1;i+=2) {
  //cout<<i<<" ";
//}
//1,2,4,8,16,32.....
int a=1;
for(int i=1;i<=n;i++){
  cout<<a<<" ";
  a=a*2;
}
return 0;
}