#include<iostream>
using namespace std;
int main() {
int age1,age2,age3;
cout<<"Enter the ages of three people:";
cin>>age1>>age2>>age3;

int oldest=age1,youngest=age1;
if(age2>oldest) {
    oldest=age2;
}
if(age3>oldest) {
    oldest=age3;
}
cout<<"The oldest person is:"<<oldest<<"years old"<<endl;

if(age2<youngest) {
    youngest=age2;
}
if(age3<youngest) {
    youngest=age3;
}
cout<<"The youngest person is:"<<youngest<<"years old"<<endl;

 return 0;
}