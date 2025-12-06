#include<iostream>
using namespace std;
int main() {

int a,b,c,d;
cout<<"Enter 4 integers:";
cin>>a>>b>>c>>d;

int smallest,second_smallest;
if(a<b) {
    smallest=a;
    second_smallest=b;
}else{
   smallest=b;
    second_smallest=a;
}
if(c<smallest) {
    second_smallest=smallest;
    smallest=c;
}else if(c<second_smallest) {
    second_smallest=c;
}
   if(d<smallest) {
    second_smallest=smallest;
    smallest=d;
}else if(d<second_smallest) {
    second_smallest=d;
}
cout<<"The 2nd smallest number is:"<<second_smallest<<endl;

 return 0;
}