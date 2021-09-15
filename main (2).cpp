/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*NAME-MADHURA A V 
DATE-30/11/2020
PROGRAM NAME-4NI19EC050_BINARY SEARCH.cpp*/

#include <iostream>
  using namespace std;
 
int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;
 
    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
 
  return -1;
}
 
int main() {
  int myarr[10];
  int num;
  int output;
 
  cout << "Please enter 10 elements ASCENDING order" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;
 
  output = binarySearch(myarr, 0, 9, num);
 
  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }
 
  return 0;}