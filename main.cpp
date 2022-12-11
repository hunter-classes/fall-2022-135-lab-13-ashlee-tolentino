/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab13

This program works with recursion.
*/

#include <iostream>
#include <string>
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




  
  
  return 0;
}
