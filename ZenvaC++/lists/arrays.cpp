#include <iostream>

int main() {
  std::string attendees[] = {"Natalie", "Gruff", "Karlen"};

  //get individual item
  std::string first = attendees[0];

  //update item
  attendees[0] = "Ripley";

  //alterative array creation.
  int placeholder[10];
  placeholder[0] = 42;
  placeholder[5] = 3;
};