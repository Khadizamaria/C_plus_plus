#include<iostream>
#include<iomanip>
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
double balance=0;
int choice=0;
do{
cout<<"***********"<<endl;
cout<<"Enter your choice:"<<endl;
cout<<"***********"<<endl;
cout<<"1.Show Balance:"<<endl;
cout<<"2.Deposit Money:"<<endl;
cout<<"3.Withdraw Money:"<<endl;
cout<<"4.Exit:"<<endl;
cin>>choice;

switch(choice) {
    case 1:showBalance(balance);
    break;
    case 2:balance +=deposit();
    break;
    case 3:balance -=withdraw(balance);
    break;
    case 4:cout<<"Thanks for visiting"<<endl;
    default:cout<<"Invalid choice"<<endl;
}
}while(choice!=4);
return 0;
}
void showBalance(double balance){
  cout<<"Your balance is:$"<<std::setprecision(2)<<std::fixed<<balance<<endl;
}
double amount=0;
double deposit() {
    cout<<"Enter the amount u want to deposit:";
    cin>>amount;
  if(amount>0) return amount;
else{
  cout<<"That's not avalid amount:";
  return 0;
}
}
double withdraw(double balance){
  double amount=0;
  cout<<"Enter amount to be withdrawn:";
  cin>>amount;
  if(amount>balance) {
    cout<<"Insufficient funds:"<<endl;
    return 0;
  } else if(amount<0) {
    cout<<"That's not a valid amount:";
    return 0;
  }
return amount;
}
