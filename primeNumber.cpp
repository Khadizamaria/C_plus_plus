#include<iostream>
using namespace std;
int main() {

int numbers[50];
for(int i=0;i<50;i++) {
    numbers[i]=i+1;
}
cout<<"Prime numbers between 1 and 50 are:";
for(int i=0;i<50;i++) {
   int num=numbers[i];
   if(num<2) {
    continue;
   }

bool isPrime=true;
for(int j=2;j*j<=num;j++) {
    if(num %j==0) {
        isPrime=false;
        break;
    }
}
if(isPrime) {
    cout<<num<<" ";
}
}
cout<<endl;
 return 0;
}