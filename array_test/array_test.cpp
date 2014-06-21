#include "array_test.h"
#include <iostream>
#include <array>

using namespace std;

void ArrayTest::run(){
  array<string, 3> arr = {"string"};

  std::cout << "arr[0]" << std::endl;
  std::cout << arr[0] << std::endl;

  std::cout <<  "size" << std::endl;
  std::cout << arr.size() << std::endl;

  std::cout << "arr.begin()" << std::endl;
  std::cout << arr.begin() << std::endl;

  std::cout << "*arr.begin()" << std::endl;
  std::cout << *arr.begin() << std::endl;
}

ArrayTest::ArrayTest(){}
ArrayTest::~ArrayTest(){}
