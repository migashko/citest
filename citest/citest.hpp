#pragma once
#include <citest/icitest.hpp>

class citest:
  public icitest
{
public:
  virtual ~citest() override;
  virtual void method1(int param1, const std::string& param2) override;
  virtual void method2(int param1, const std::string& param2) override;
  virtual void method3(int param1, const std::string& param2) override;
private:
  int _member1;
  std::string _member2;
};
