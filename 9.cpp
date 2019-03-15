// clang++ -std=c++17 -Wall -O0
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "picojson/picojson.h" // https://github.com/kazuho/picojson

void test(double v) {
  std::cout << v << ":";
  try {
    std::vector<picojson::value> ary{picojson::value(v)};
    picojson::value obj(ary);
    std::cout << obj.serialize() << std::endl;
  } catch (std::overflow_error &e) {
    std::cout << "overflow error" << std::endl;
  }
}

int main() {
  test(std::numeric_limits<double>::quiet_NaN());
  test(std::numeric_limits<double>::infinity());
}
