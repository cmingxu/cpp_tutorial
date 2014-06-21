#include "vector_test.h"
#include <iostream>
#include <vector>

using namespace std;

void VectorTest::run(){
  vector<int> *pstore = new vector<int>;
  vector<int> store;
  for (int i = 0; i < 5; i++) {
    pstore->push_back(i);
    store.push_back(i);
  }

  for (int i = 0; i < 5; i++) {
     std::cout << (*pstore)[i]  << std::endl;
     std::cout << store[i]  << std::endl;
  }

  for (vector<int>::iterator it=store.begin(); it != store.end(); ++it ) {
     std::cout << *it  << std::endl;
  }


  std::cout << "at()" << std::endl;
  std::cout << store.at(1) << std::endl;

  std::cout << "frout()" << std::endl;
  std::cout << store.front() << std::endl;

  std::cout << "back()" << std::endl;
  std::cout << store.back() << std::endl;

  std::cout << "max_size()" << std::endl;
  std::cout << store.max_size() << std::endl;

  std::cout << "empty()" << std::endl;
  std::cout << store.empty() << std::endl;

  std::cout << "size()" << std::endl;
  std::cout << store.size() << std::endl;

};
VectorTest::VectorTest(){
  std::cout << "Initializing Vectortes" << std::endl;
}
