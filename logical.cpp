#include<iostream>
using namespace std;
int main() {
char ch;
cout<<"Enter any letter:";
cin>>ch;

//ch=tolower(ch);bcz of it if i take 'A' sill i'll get vowel in output
if(ch=='a' || ch=='e' || ch=='i' || ch== 'o' || ch=='u')
{
    cout<<"vowel";
}
else{
    cout<<"consonent";
}
return 0;
}