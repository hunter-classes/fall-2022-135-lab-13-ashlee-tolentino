#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"
#include <string>
#include <cctype>

TEST_CASE("Print Range"){
  std::string result1 = printRange(-2, 10);
  CHECK(result1 == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
}

TEST_CASE("Sum Range"){
  CHECK(sumRange(1, 3) == 6);
  CHECK(sumRange(-2, 10) == 52);
}

TEST_CASE("Sum Array"){
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
  CHECK(sumArray(arr, size) == 43);
  CHECK(sumArray(arr, 5) == 34);
  delete[] arr;
}

TEST_CASE("Is Alphanumeric"){
  CHECK(isAlphanumeric("ABCD") == true);
  CHECK(isAlphanumeric("Abcd1234xyz") == true);
}

TEST_CASE("Nested Parens"){
  CHECK(nestedParens("") == true);
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("((()))") == true);
  CHECK(nestedParens("(((") == false);
  CHECK(nestedParens("(()") == false);
}
