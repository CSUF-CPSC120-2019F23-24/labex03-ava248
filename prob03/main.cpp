// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{

  int height;
  int feet;
  int inches;


// Get the person's height
  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height;

  feet = height / 12;
  inches = height % 12;

  std::cout << "That person is " << feet << '\'' << inches << '"' << std::endl;




  return 0;
}
