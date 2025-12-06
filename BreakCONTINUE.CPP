#include<iostream>
using namespace std;
int main()
{
    //for(int i=0;i<1;i++) {
        //if(i==5){
         //  break;
        //}
       // cout<<i<<endl;
    //}

    for(int i=1;i<=20;i++) {
        if(i==3 || i==8) continue;
        cout<<i<<" ";
    }

    
    return 0;
}