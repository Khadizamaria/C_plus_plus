#include<iostream>
using namespace std;

class Person{
    public:
    virtual void displayRole() {
        cout<<"I am a person"<<endl;
    }
};

class Employee:public Person {
    public:
    void displayRole()  {
     cout<<"I am a employee"<<endl;
    }
};

class Student:public Person {
    public:
    void displayRole()  {
     cout<<"I am a student"<<endl;
    }
};

class Faculty:public Employee {
    public:
    void displayRole()  {
     cout<<"I am a faculty"<<endl;
    }
};

class Officer:public Employee{
    public:
    void displayRole()  {
     cout<<"I am a officer"<<endl;
    }
};

class ScholarshipStudent:public Student{
    public:
    void displayRole() {
     cout<<"I am a scholarship student"<<endl;
    }
};

class TA:public Employee,public Student {
    public:
    void displayRole()  {
     cout<<"I am a teaching assistant"<<endl;
    }
  };

  int main() {
    Faculty f;
    Officer o;
    Student s;
    ScholarshipStudent ss;
    TA ta;

    f.displayRole();
    o.displayRole();
    s.displayRole();
    ss.displayRole();
    ta.displayRole();

    return 0;
}
