#include<iostream>
using namespace std;
int main() {
int marks[5];
double totalGPA=0;

cout<<"Enter marks for 5 courses(out of 100):\n";
for(int i=0;i<5;i++) {
    cin>>marks[i];

    if(marks[i]<0 || marks[i]>100) {
        cout<<"Invalid marks entered for course"<<i+1<<"Please enter a value between 0 and 100.\n";
        return 1;
    }
}
for(int i=0;i<5;i++) {
    if(marks[i]>=90) {
        cout<<"Course"<<i+1<<"grade:A+\tGPA:4.00\n";
        totalGPA+=4.00;
    }else if(marks[i]>=90) {
        cout<<"Course"<<i+1<<"grade:A+\tGPA:4.00\n";
        totalGPA+=4.00;
}else if(marks[i]>=85) {
        cout<<"Course"<<i+1<<"grade:A\tGPA:3.75\n";
        totalGPA+=3.75;
}else if(marks[i]>=80) {
        cout<<"Course"<<i+1<<"grade:B+\tGPA:3.50\n";
        totalGPA+=3.50;
}else if(marks[i]>=75) {
        cout<<"Course"<<i+1<<"grade:B\tGPA:3.25\n";
        totalGPA+=3.25;
}else if(marks[i]>=70) {
        cout<<"Course"<<i+1<<"grade:C+\tGPA:3.00\n";
        totalGPA+=3.00;
}else if(marks[i]>=65) {
        cout<<"Course"<<i+1<<"grade:C\tGPA:2.75\n";
        totalGPA+=2.75;
}else if(marks[i]>=60) {
        cout<<"Course"<<i+1<<"grade:D+\tGPA:2.50\n";
        totalGPA+=2.50;
}else if(marks[i]>=50) {
        cout<<"Course"<<i+1<<"grade:D\tGPA:2.25\n";
        totalGPA+=2.25;
}
else{
        cout<<"Course"<<i+1<<"grade:F\tGPA:0.00\n";
    }
}

double CGPA=totalGPA/5;
cout<<"\nCGPA:"<<CGPA<<endl;

return 0;
}