#include <iostream>
#include "citest.hpp"

citest::~citest()
{
  
}

void citest::method1(int param1, const std::string& param2) 
{
  std::cout << param1 << std::endl;
  std::cout << param2 << std::endl;
}

void citest::method2(int param1, const std::string& param2) 
{
  std::cout << param1 << std::endl;
  std::cout << param2 << std::endl;
}

void citest::method3(int param1, const std::string& param2) 
{
  std::cout << param1 << std::endl;
  std::cout << param2 << std::endl;
}
