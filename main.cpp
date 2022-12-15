/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab13

This program works with recursion.
*/

#include <iostream>
#include <string>
#include <cctype>
#include "recursion.h"

int main()
{
  // Task A
  std::cout << "Task A\n\n";
  std::string result1 = printRange(-2, 10);
  std::cout << result1 << std::endl;
  std::cout << "--------------------------------\n";

  // Task B
  std::cout << "Task B\n\n";
  int x = sumRange(1, 3);
  std::cout << "This is " << x << std::endl;   // 6
    
  int y = sumRange(-2, 10);
  std::cout << "That is " << y << std::endl;   // 52
  std::cout << "--------------------------------\n";

  // Task C
  std::cout << "Task C\n\n";
  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  int sum1 = sumArray(arr, size); // Add all elements
  std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43

  int sum2 = sumArray(arr, 5); // Add up first five elements
  std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

  delete[] arr;         // deallocate it
  std::cout << "--------------------------------\n";

  // Task D
  std::cout << "Task D\n\n";
  std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
  std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
  std::cout << "--------------------------------\n";

  // Task E
  std::cout << "Task E\n\n";
  std::cout << nestedParens("((()))") << std::endl;      // true (1)
  std::cout << nestedParens("()") << std::endl;          // true (1)
  std::cout << nestedParens("") << std::endl;            // true (1)

  std::cout << nestedParens("(((") << std::endl;         // false (0)
  std::cout << nestedParens("(()") << std::endl;         // false (0)
  std::cout << "--------------------------------\n";
  
  return 0;
}
