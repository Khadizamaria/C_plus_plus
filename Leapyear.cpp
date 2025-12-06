#include<iostream>
using namespace std;
int main() {
int year;
cout<<"Enter any year :";
cin>>year;

if(year%4==0 && year%100!=0 || year%400==0) {
    cout<<"Leapyear";
}

else{
    cout<<"Not Leapyear";
}
    return 0;
}