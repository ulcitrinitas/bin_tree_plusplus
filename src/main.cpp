#include <iostream>
#include <print>

#include <memory>

int main(int argc, const char **argv) {

  std::println("Cpp version: {}", __cplusplus);

  std::println("args number: {}", argc);

  for (int i = 0; i < argc; i++) {
    std::println("{}: {}", i, argv[i]);
  }

  return 0;
}
