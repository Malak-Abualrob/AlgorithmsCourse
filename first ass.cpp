/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <chrono> 
using namespace std;
using namespace chrono; 
// Iterative factorial function
unsigned long long iterativeFact(int n) { 
 unsigned long long fact = 1; 
 for (int i = 1; i <= n; i++) { 
 fact *= i; 
 } 
 return fact; 
} 
// Recursive factorial function 
unsigned long long recursiveFact(int n) { 
 if (n == 0 || n == 1) {
 return 1; 
 } 
 return n * recursiveFact(n - 1); 
} 
int main()
{
 int n;
 //input from user
 cout<<"Enter a non-negative integer : ";
 cin>>n;
 //check if the number is non-negative
 if(n<0)
 cout<<"Factorial is not defined for negative numbers, please enter a positive integer"<<endl;
 else
 { //calaulate the Factorial
 
 auto start_time = high_resolution_clock::now(); 
 //cout << "Iterative factorial(" << n << "): " << iterativeFact(n) << endl; 
 cout << "Recursive factorial(" << n << "): " << recursiveFact(n) << endl; 
 auto end_time = high_resolution_clock::now(); 
 auto duration = duration_cast<microseconds>(end_time - start_time).count(); 
 //cout << "Execution Time (Iterative, n=" << n << "): " << duration << " microseconds" << endl; 
 cout << "Execution Time (Recursive, n=" << n << "): " << duration << " microseconds" << endl; 
 } 
 return 0;
}