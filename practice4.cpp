#include<iostream>
using namespace std;
int main() {
int totalClassHeld,totalClassAttended;
double attendenceParcentage;

cout<<"Enter the total number of classes held:";
cin>>totalClassHeld;
cout<<"Enter the total number of classes attended by the student:";
cin>>totalClassAttended;

attendenceParcentage=((double)totalClassAttended/totalClassHeld)*100;
cout<<"Attendence Percentage:"<<attendenceParcentage<<"%"<<endl;

if(attendenceParcentage>=80) {
    cout<<"The student is allowed to sit for the exam:"<<endl;
}
else{
    cout<<"The student is not allowed to sit for the exam:"<<endl;
}
return 0;
}