// Name: Fix errors
// This program calculates the area of a room.

#include <iostream>

int main()
{
  // Creating the variables
  double width, length;
  float area;

  // Get the length and width of the room.
  std::cout << "What is the room's width in feet? ";
  std::cin >> width;
  std::cout << "What is the room's length in feet? ";
  std::cin >> length;

  // Calculate the area of the room.
  area = length * width;

  // Display the area of the room.
  std::cout << "The \"area\" of the room is " << area << '\n';

  return 0;
}
