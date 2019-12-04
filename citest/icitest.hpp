#pragma once
#include <string>

class icitest
{
public:
  virtual ~icitest(){}
  virtual void method1(int param1, const std::string& param2) = 0;
  virtual void method2(int param1, const std::string& param2) = 0;
  virtual void method3(int param1, const std::string& param2) = 0;
};
