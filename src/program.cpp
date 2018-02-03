#include <iostream>
#include <functional>

int main() {
  auto bop = [out = std::ref(std::cout << "Hello ")](){ out.get() << "world!" << '\n'; };
  bop();
  bop();

}