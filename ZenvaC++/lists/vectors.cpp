#include <iostream>
#include <vector>

int main() { 
  std::vector<std::string> attendees;

  attendees.push_back("Natalie");
  attendees.push_back("Gruff");
  attendees.push_back("Karlen");

  attendees.pop_back();

  attendees.insert(attendees.begin()+ 1, "Ripley");
}