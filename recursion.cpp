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
   Task A: This function prints all numbers in range left <= x <= right, separated by spaces. (Don’t use loops, global or static variables.)
*/
std::string printRange(int left, int right) {
  if(left > right) {
    return "";
  }
  else {
    if(left <= right) {
      return std::to_string(left) + " " + printRange(left + 1, right);
    }
  }
  return "";
}

/**
   Task B: This function computes the sum of all numbers in range left <= x <= right. (Don’t use loops, global or static variables.)
*/
int sumRange(int left, int right) {
  if(left > right) {
    return 0;
  }
  else {
    return left + sumRange(left + 1, right);
  }
}

/**
   Task C: This function receives an array (as a pointer to its first element) and the size of the array, and should return the sum of its elements. The function itself should not do any dynamic memory allocations.
*/
int sumArray(int *arr, int size) {
  if(size > 0) {
    return arr[size - 1] + sumArray(arr, size - 1);
  }
  else {
    return 0;
  }
}
