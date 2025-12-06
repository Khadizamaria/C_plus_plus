#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

//for(int i=1;i<=5;i++)
//{
//int randomNumber = rand()%5+1;
//cout<<"Random number ="<<randomNumber<<endl;
//}
while(1)
{
    int guessNum,randomNum;
cout<<"Enter ur guess between 1 to 5:";
cin>>guessNum;

randomNum = 1+rand()%5;

if(guessNum==randomNum)
{
    cout<<"U hv won:"<<endl;
}
else{
cout<<"U hv lost,try again :"<<endl;
cout<<"Random number was:"<<randomNum<<endl;
}

}
 return 0;
}