#include<iostream>
using namespace std;
int main() {
    int n;
cout<<"Enter side of square:";
cin>>n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
       // cout<<j<<" ";
       cout<<(char)(j+64)<<" ";//alphabet square
    }
    cout<<endl;
}
//same number in a line
 int n;
cout<<"Enter side of square:";
cin>>n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
        cout<<i<<" ";
    }
    cout<<endl;
}
//StarTriangleUlta
int n;
cout<<"Enter number of rows:";
cin>>n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=n-i-1;j++) {
        cout<<"*";
    }
    cout<<endl;
}

//triangle

int n;
cout<<"Enter number of rows:";
cin>>n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
       cout<<"*";
    }
    cout<<endl;
}
//oddnumberTriangle
int n;
cout<<"Enter number of rows:";
cin>>n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout<<2*j-1<<" ";
    }
    cout<<endl;
}

int n;
cout<<"Enter value of n:";
cin>>n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        if(i%2 !=0) cout<<j<<" ";
        else cout<< char('A'+j-1)<<" ";
    }
    cout<<endl;
}

int n=4;
for(int i=1;i<=n;i++) {
    int start=n;
    for(int j=1;j<=n;j++) {
        cout<<start--<<" ";
    }
    cout<<endl;
}

return 0;
}

