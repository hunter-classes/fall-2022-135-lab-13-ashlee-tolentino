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

/**
   Task D: This function returns true if all characters in the string are letters and digits, otherwise it returns false.
*/
bool isAlphanumeric(std::string s) {
  if(s.empty() == true) {
    return true;
  }
  else if ((isalpha(s[s.length() - 1]) == 0) && (isdigit(s[s.length() - 1]) == 0)) {
    return false;
  }
  else {
    s = s.substr(0, s.length() - 1);
    isAlphanumeric(s);
    return true;
  }
  //return true;
}

/**
   Task E: This function returns true if the string is a sequence of nested parentheses.
*/
int i = 0;
bool nestedParens(std::string s) {
  if(s.empty() == true) {
    return true;
  }
  else {
    if((s.substr(i, 1) == "(") && (s.substr(s.length()-1, 1) == ")")) {
      return true;
    }
    i++;
    s = s.substr(i, s.length() - 1);
    nestedParens(s);
  }
}
