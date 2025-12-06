#include<iostream>
using namespace std;

//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
class Circle {
private:
  double radius;
  public:
  Circle(double r):radius(r) {

  }
 
 double calculateArea() {
    return 3.1416*radius*radius;
 }
 double calculateCircumference() {
        return 2 * M_PI * radius;
    }
};
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle myCircle(radius);
   cout << "Area: " << myCircle.calculateArea() <<endl;
    cout << "Circumference: " << myCircle.calculateCircumference() <<endl; 
  return 0;
}

//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

 cout << "Enter the width of the rectangle: ";
cin >> width;

    Rectangle myRectangle(length, width);

 cout << "Area: " << myRectangle.calculateArea() <<endl;
  cout << "Perimeter: " << myRectangle.calculatePerimeter() <<endl;

    return 0;
}
//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables
class Person {
private:
    string name;
    int age;
    string country;

public:
    Person() : name(""), age(0), country("") {}

    // Setter for name
    void setName(string& n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for age
    void setAge(int a) {
         age = a;
    }
   int getAge() const {
        return age;
    }

    // Setter for country
    void setCountry(string& c) {
        country = c;
    }

    // Getter for country
    string getCountry() {
        return country;
    }

    // Function to display person details
    void display() {
cout << "Name: " << name << "\n";
cout << "Age: " << age << "\n";
cout << "Country: " << country << "\n";
    }
};
int main() {
    Person person;
string name, country;
 int age;

 cout << "Enter name: ";
getline(cin, name);
person.setName(name);

cout << "Enter age: ";
cin >> age;
person.setAge(age);

cout << "Enter country: ";
getline(cin, country);
person.setCountry(country);

    // Display person details
cout << "\nPerson Details:\n";
person.display();
return 0;
}

// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
class BankAccount {
private:
string accountNumber;
double balance;

public:
    // Constructor
    BankAccount(string& accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } else {
          cout << "Deposit amount must be positive.\n";
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
    cout << "Withdrawn: " << amount << "\n";
        } else if (amount > balance) {
    cout << "Insufficient balance.\n";
        } else {
        cout << "Withdrawal amount must be positive.\n";
        }
    }

    // Function to display account details
    void display() {
    cout << "Account Number: " << accountNumber << "\n";
    cout << "Balance: " << balance << "\n";
    }
};


//Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(string empName, int empID) : name(empName), employeeID(empID), salary(0.0) {}
void setSalary(double baseSalary,double performanceRating) {
    salary=baseSalary+(baseSalary*performanceRating*0.1);
}
void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Creating an Employee object
    Employee emp("John Doe", 101);

    // Setting salary based on performance
    emp.setSalary(50000, 4.5); // Base salary $50,000, performance rating 4.5

    // Displaying employee details
    emp.displayDetails();

 return 0;
}

//Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

     void determineType() const {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    }
};

int main() {
    Triangle tri(5, 5, 5);
    tri.determineType();

    return 0;
}
//Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information
class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;

public:
    Student(string studentName, string studentClass, int roll, double studentMarks)
        : name(studentName), studentClass(studentClass), rollNumber(roll), marks(studentMarks) {}

    char calculateGrade() const {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 50)
            return 'C';
        else
            return 'F';
    }

    void displayInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student("John Doe", "10th", 23, 85);
    student.displayInfo();

    return 0;
}