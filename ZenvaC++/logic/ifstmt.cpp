#include <iostream>

int main() {

  std::string key = "r";

  if (key == "r") {
    std::cout << "Move right";
  } else if (key == "l") {
    std::cout << "Move left";
  } else {
    std::cout << "Unknown command";
  };
  
};