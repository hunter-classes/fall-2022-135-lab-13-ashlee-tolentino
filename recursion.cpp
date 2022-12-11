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

/**
   Task A: This function prints all numbers in range left <= x <= right, separated by spaces.
*/
std::string result;
std::string printRange(int left, int right) {
  if(left > right) {
    return result;
  }
  else {
    if(left <= right) {
      result = result + std::to_string(left) + " ";
      printRange(left + 1, right);
    }
  }

  return result;
}
