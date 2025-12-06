#include<iostream>
using namespace std;
//tranpose matrix
int main() {
//int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//for(int i=0;i<3;i++) {
  //  for(int j=i;j<3;j++) {
       //swap
      //  int temp=A[i][j];
      //  A[i][j]=A[j][i];
       // A[j][i]=temp;
   // }
//}
//print
//for(int i=0;i<3;i++) {
  //  for(int j=0;j<3;j++) {
   //     cout<<A[i][j]<<" ";
   // }
   // cout<<"\n";
//}

//Matrix multiply
//int n1,n2,n3;
//cin>>n1>>n2>>n3;

//int m1[n1,n2];
//int m2[n2,n3];

//for(int i=0;i<n1;i++) {
 //   for(int j=0;j<n2;j++) {
  //      cin>>m1[i][j];
  //  }
//}
//for(int i=0;i<n2;i++) {
 //   for(int j=0;j<n3;j++) {
     //   cin>>m2[i][j];
//    }
//}

//int ans[n1,n3];

//for(int i=0;i<n1;i++) {
   // for(int j=0;j<n3;j++) {
   //     ans[i][j]=0;
  //  }
//}

//for(int i=0;i<n1;i++) {
 //   for(int j=0;j<n3;j++) {
    //    for(int k=0;k<n2;k++) {
           //ans[i][j] += m1[i][k]*m2[k][j];
       // }
   // }
//}
//for(int i=0;i<n1;i++) {
 //  for(int j=0;j<3;j++) {
   //     cout<< ans[i][j]<<" "<<endl;
   // }
//}

//MarksRoll side by side
//int arr[4][2]={{76,81},{13,76},{82,91},{88,90}};
//for(int i=0;i<4;i++) {
  //  cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
//}

//Maximum in elements
//int arr[4][2]={{76,81},{13,76},{82,91},{88,90}};
//int mx=INT_MIN;
//for(int i=0;i<4;i++) {
  //  for(int j=0;j<2;j++) {
    //   if(arr[i][j]>mx) {
      //  mx=arr[i][j];
      // }
    //}
//}
//cout<<mx;

int row,col;
int matrix[row][col];
int sum=0;

cout<<"Enter the number of row:";
cin>>row;
cout<<"Enter the number of col:";
cin>>col;

cout<<"Enter the elements of the matrix:"<<endl;
for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
        cin>>matrix[i][j];
        sum+=matrix[i][j];
    }
}
cout<<"The sum of all elements in the matrix is:"<<sum<<endl;

return 0;
}