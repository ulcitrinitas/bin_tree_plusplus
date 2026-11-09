#include <iostream>
#include <print>

#include <memory>

#include "../include/rectangle.hpp"

int main(int argc, const char **argv) {

  auto ptr1 = std::make_shared<Rectangle>(10, 50);
  auto ptr2 = ptr1;

  std::println("ptr1 area: {}", ptr1->area());
  std::println("ptr2 area: {}", ptr2->area());
  std::println("rectangle references: {}", ptr1.use_count());

  return 0;
}
