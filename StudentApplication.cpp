#include<iostream>
using namespace std;
int main() {
int n,sum;
cout<<"Enter Number of Students:";
cin>>n;

int students[n];
for(int i=0;i<n;i++) {
    cin>>students[i];
    sum=sum+students[i];
}
cout<<"Total marks :"<<sum;

float avg=(float) sum/n;
cout<<"Average;"<<avg;

int i;
int max=students[0];
int min=students[0];
for(i=1;i<n;i++) {
    if(max<students[i]){
        max=students[i];
    }
    if(min>students[i]){
        min=students[i];
    }

}
cout<<"Maximum marks="<<max<<endl;
cout<<"Minimum marks="<<min<<endl;
    return 0;
}