#include<iostream>
using namespace std;
int main() {
int A[2][3];

//A[0][0] =10;
//A[0][1] =20;
//A[0][2] =30;

//A[1][0] =40;
//A[1][1] =50;
//A[1][2] =60;

//for(int row=0;row<2;row++)
//{
   // for(int col=0;col<3;col++) {
       // cout<<A[row][col]<<" ";
    //}
    //cout<<endl;
//}

//int code[2][4] = {
               //{1,2,3,4},
               //{5,6,7,8}

//};
//for(int i=0;i<2;i++){
    //for(int j=0;j<4;j++) {
       // cout<<code[i][j]<<endl;
    //}
//}
//User input
int A[2][3];
cout<<"Enter the elements for the matrix"<<endl;

for(int row=0;row<2;row++) {
    for(int col=0;col<3;col++) {
        cout<<"A["<<row<<"]["<<col<<"] =";
        cin>>A[row][col];
    }
}

//Fill with value 10 in all
int arr[5][5];
for(int i=0;i<=4;i++) {
    for(int j=0;j<=4;j++) {
        arr[i][j]=10;
    }
}
for(int i=0;i<=4;i++) {
    for(int j=0;j<=4;j++) {
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 return 0;
}
