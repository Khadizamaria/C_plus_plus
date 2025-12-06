//square of given number
#include<iostream>
using namespace std;

//int square(int number){
//return number*number;
//}
//int main() {
   // int num;
   // cout<<"Enter number:";
  //  cin>>num;

//cout<<"The square of"<<num<<"is"<<square(num)<<endl;

//Write a program in C to check if a given number is even or odd using the function.
//bool isEven(int number) {
 //   return number%2==0;
//}
//int main() {
  //  int num;
    //cout << "Enter a number to check if it's even or odd: ";
   // cin >> num;
   // if (isEven(num)) {
      //  cout << num << " is even." << endl;
   // } else {
    //    cout << num << " is odd." << endl;
    //}

//Write a program in C to swap two numbers using a function.
//void swapNumbers(int &a, int &b) {
  //  int temp = a;
    //a = b;
  //  b = temp;
//}

//int main() {
 //   int num1, num2;
   // cout << "Enter the first number: ";
 //   cin >> num1;
   // cout << "Enter the second number: ";
 //   cin >> num2;

   // cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

   // swapNumbers(num1, num2);

   // cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

   // Write a program in C++ to convert a decimal number to a binary number using the
 //  void decimalToBinary(int decimal) {
   // if(decimal==0) {
  //  cout<<"0";
  //  return;
  // }

  // while(decimal>0) {
  //  cout<< decimal%2;
  // decimal /=2;
  // }

  // }
//int main() {
  //  int num;

    // Ask the user for input
    //cout << "Enter a decimal number to convert to binary: ";
   // cin >> num;

   // if (num < 0) {
   //     cout << "Please enter a non-negative number." << endl;
  //  } else {
      //  cout << "The binary representation of " << num << " is: ";
        //decimalToBinary(num);
    //    cout << endl;
   // }

//  Write a program in C to get the largest element of an array using the function.
//int findLargest(int arr[],int size) {
 //   int largest=arr[0];
  //  for(int i=1;i<size;i++) {
    //    if(arr[i]>largest) {
      //      largest=arr[i];
    //    }
    //}
  //  return largest;
//}
//int main() {
  // int n;

    // Ask the user for the size of the array
 //  cout << "Enter the number of elements in the array: ";
   // cin >> n;
//   int arr[n];

    // Ask the user to input elements of the array
   // cout << "Enter " << n << " elements:" << endl;
   // for (int i = 0; i < n; i++) {
   //     cin >> arr[i];
   // }

    // Call the function and display the largest element
   // int largest = findLargest(arr, n);
   // cout << "The largest element in the array is: " << largest << endl;

//Write a program in C++ to print all perfect numbers in a given range using the function
//A perfect number is a positive integer that is equal to the sum of all its proper divisors (excluding the number itself). 
//bool isPerfect(int num) {
  //int sum=0;
 // for(int i=1;i<=num/2;i++) {
   // if(num%i==0) {
     // sum+=i;
 //   }
 // }
  //return sum==num;
//}
//int main() {
//    int start, end;

    // Input range from the user
  //  cout << "Enter the start of the range: ";
    //cin >> start;
   // cout << "Enter the end of the range: ";
   // cin >> end;

    // Print perfect numbers in the range
   // cout << "Perfect numbers between " << 
   // bool found=false;
   // for(int i=start;i<=end;i++) {
   //   if(isPerfect(i)) {
     //   cout<<i<<" ";
     //   found=true;
     // }
   // }
   // if(!found) {
   //   cout<<"None";
   // }
   // cout<<endl;

    //Write a C++ program to find the maximum and minimum of some values using a function that returns an array.
   //void findMaxMin(int arr[], int size, int &maxVal, int &minVal) {
   // maxVal = arr[0];
   // minVal = arr[0];
   // for (int i = 1; i < size; i++) {
     //   if (arr[i] > maxVal) maxVal = arr[i];
       // if (arr[i] < minVal) minVal = arr[i];
 //   }
//}
  //int main() {
    //int n;

    // Input the number of elements
   // cout << "Enter the number of elements: ";
  //  cin >> n;

    //int arr[n];
    // Input the elements
    //cout << "Enter the elements: ";
   // for (int i = 0; i < n; i++) {
   //     cin >> arr[i];
  //  }

    // Call the function to find max and min
    //int maxval,minval; 
   // findMaxMin(arr, n,maxval,minval);

    // Output the results
   // cout << "Maximum value: " << maxval << endl;
   // cout << "Minimum value: " << minval<<endl;

   // Write a program in C++ to check Armstrong  using the function
   #include<cmath>
   bool isArmstrong(int num) {
    int sum = 0, originalNum = num;
    int digits = 0;

    while(num!=0) {
      num/=10;
      digits++;  // here digits is count of number
    }
    num=originalNum;
    while(num!=0) {
      int digit=num%10;
      sum+=pow(digit,digits);// here digit is specific number
      num/=10;
    }
    return sum==originalNum;
   }
   int main() {
    int num;

    // Input the number to check
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is Armstrong
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
 return 0;
}