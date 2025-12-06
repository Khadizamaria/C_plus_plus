#include<iostream>
using namespace std;
int main() {
//int i=0;
//while(i<=10) {

   // cout<<i<<"Sorry Babu"<<endl;
   // i++;
//}
//int limit,sum=0;
//cout<<"Enter a positive integer:";
//cin>>limit;
//int i;
//while(i<=limit) {
 //  sum+=i;
  //  i++;
//}

//cout<<"the sum of numbers from 1 to"<<limit<<"is:"<<sum<<endl;
 //return 0;
//}

//print number of digits
int n;
cout<<"Enter the number:";
    cin>>n;
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    cout<<count << "\n";
    return 0;
    }
    