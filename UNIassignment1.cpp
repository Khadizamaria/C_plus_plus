#include<iostream>
//#include<cmath>
using namespace std;
//1.
//struct Employee {
  //  int empID;
    //double monthlySalary;

//void setDetails(int id,double salary) {
  //  empID=id;
    //monthlySalary=salary;
//}
//void displayDetails(){
  //  cout<<"Employee ID:"<<empID<<endl;
    //cout<<"Monthly Salary:"<<monthlySalary<<endl;
//}
//double yearlySalaryWithBonus() {
  //double yearlySalary=monthlySalary*12;
  //double bonus=monthlySalary*0.5*2;
 // return yearlySalary+bonus;
//}
//};
//int main() {
  //  Employee e1;
    //e1.setDetails(101, 5000.00); 
 //   cout << "Employee Details:" << endl;
   // e1.displayDetails();

 //   double yearlySalary=e1.yearlySalaryWithBonus();
   // cout << "Yearly Salary with Bonuses: " << yearlySalary << endl;

 //   return 0;
//}

//2.
  //  class Rectangle{
    //  double length;
      //double breadth;
   // public:
  //  Rectangle() {
    //  length=0;
      //breadth=0;
  //  }
    //Rectangle(double l,double b) {
      //  length=l;
        //breadth=b;
  //  }
 // void setLength(double l){
   // length=l;
 // }
  //void setBreadth(double b){
    //breadth=b;
  //}
 // double getLength() {
   // return length;
 // }
 // double getBreadth() {
   // return breadth;
  //}
  //double getArea() {
    //return length*breadth;
 // }

 // void show() {
   // cout<<"Rectangle Area:"<<getArea()<<endl;
 // }
   // };
    
//int main() {
  //  Rectangle rect1;
//rect1.setLength(5.0);
//rect1.setBreadth(3.0);

//cout << "Rectangle 1:" << endl;
// cout << "Length: " << rect1.getLength() << endl;
//cout << "Breadth: " << rect1.getBreadth() << endl;
 //rect1.show();

 //Rectangle rect2(7.5, 4.0);
 //cout << "\nRectangle 2:" << endl;
//cout << "Length: " << rect2.getLength() << endl;
 //cout << "Breadth: " << rect2.getBreadth() << endl;
//rect2.show();

 //return 0;
//}
////////
//3.

//bool isprime(int num){
  //  if(num<=1) return false;
    //for(int i=2;i<=sqrt(num);i++) {
      //  if(num%1==0) return false;
   // }
  ////  return true;
//}
//int main() {
  //  int marks[5],total=0;
    //cout<<"Enter marks for 5 courses:"<<endl;
 //   for(int i=0;i<5;i++){
   //     while(true){
     //       cout<<"Course"<<(i+1)<<":";
       //     cin>>marks[i];

         //   if(marks[i]>=0 && marks[i]<=100){
           //     total+=marks[i];
             //   break;
           // }else{
           //    cout << "Invalid input. Please enter a number between 0 and 100.\n";

          //  }
        //}
    //}
   // int percentage=total/5;
   // cout << "\nTotal Percentage: " << percentage << "%\n";
   // if(isprime(percentage)){
    // cout << "The percentage (" << percentage << ") is a Prime Number.\n";
    //} else {
    //    cout << "The percentage (" << percentage << ") is not a Prime Number.\n";
   // }
 //return 0;   
 //   }

////4.
int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 1; i <= numStudents; ++i) {
        string name;
        int rollNumber, numSubjects, totalMarks = 0;
        bool isPassed = true;

        cout << "\nEnter name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter number of subjects: ";
        cin >> numSubjects;

        for (int j = 1; j <= numSubjects; ++j) {
            int marks;
            cout << "Enter marks for subject " << j << ": ";
            cin >> marks;

            totalMarks += marks;
            if (marks < 40) {
                isPassed = false;
            }
        }

        float average = (float)totalMarks / numSubjects;
        cout << "\n--- Report for " << name << " ---\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Total Marks: " << totalMarks << "\n";
        cout << "Average Marks: " << average << "\n";
        cout << "Status: " << (isPassed ? "Pass" : "Fail") << "\n";
    }

    return 0;
}














