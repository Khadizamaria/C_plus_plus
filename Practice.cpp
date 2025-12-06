#include<iostream>
using namespace std;
int main() {
int a,b,c,d,e;
cout<<"Enter 5 integer numbers:";
cin>>a>>b>>c>>d>>e;

int largest,second_largest,third_largest;

if(a>b) {
   largest=a;
    second_largest=b;
}else{
    largest=b;
    second_largest=a;
}
if(c>largest) {
    third_largest=second_largest;
    second_largest=largest;
     largest=c;
}else if(c>second_largest) {
    third_largest=second_largest;
    second_largest=c;
}else{
    third_largest=c;
}
if(d>largest) {
    third_largest=second_largest;
    second_largest=largest;
     largest=d;
}else if(d>second_largest) {
    third_largest=second_largest;
    second_largest=d;
}else{
    third_largest=d;
}
if(e>largest) {
    third_largest=second_largest;
    second_largest=largest;
     largest=e;
}else if(e>second_largest) {
    third_largest=second_largest;
    second_largest=e;
}else{
    third_largest=e;
}
cout<<"Thr 3rd largest number is:"<<third_largest<<endl;

return 0;
}