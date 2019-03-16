// clang++ -std=c++17 -Wall -O0
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "json11/json11.hpp" // https://github.com/dropbox/json11/

void test(double v) {
  std::cout << v << ":";
  try {
    json11::Json o = json11::Json::array{v};
    std::cout << o.dump() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main() {
  test(std::numeric_limits<double>::quiet_NaN());
  test(std::numeric_limits<double>::infinity());
}
