#include <iostream>

int main()
{
           int* p0 = reinterpret_cast<         int*>(0xdeadbeef);
  volatile int* p1 = reinterpret_cast<volatile int*>(0xdeadbeef);

  std::cout << p0 << std::endl;
  std::cout << p1 << std::endl;
}
