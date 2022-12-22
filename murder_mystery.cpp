// A Murder Mystery

#include <iostream>

int main() {
  // Character Selection
  int character;
  std::cout << "Please choose a character for this adventure\n";
  std::cout << "1) Captain Ketchup\n";
  std::cout << "2) Miss Mayo\n";
  std::cout << "3) Prince Pickle\n";
  std::cin >> character;

  if (character == 1) {
    std::cout << "Captain Ketchup selected\n";
  }
  else if (character == 2) {
    std::cout << "Miss Mayo selected\n";
  }
  else if (character == 3) {
    std::cout << "Prince Pickle selected\n";
  }
  else {
    std::cout << "Please enter a valid character\n";
  }

  // Room 1
  std::cout << "A murderer is on the loose! Your task is to choose which room to hide in, you only have one option. Guess wrong and death awaits.\n";
  std::cout << "You enter the hallway, which room do you want to hide in?\n";
  int room;
  std::cout << "1) Basement\n";
  std::cout << "2) Kitchen\n";
  std::cout << "3) Garden\n";
  std::cin >> room;

  if (room == 1) {
    std::cout << "You enter a dark basement\n";
  }
  else if (room == 2) {
    std::cout << "You enter the kitchen\n";
  }
  else if (room == 3) {
    std::cout << "Through the back window into the garden\n";
  }
  else {
    std::cout << "Please enter a valid room number\n";
  }

  // Crunch time
  std::cout << "You hear footsteps, someone has followed you in, make your next mood to decide your fate.\n";
  std::cout << "The murderer is here, what do you do?\n";
  int reaction;
  std::cout << "1) Run\n";
  std::cout << "2) Fight back\n";
  std::cout << "3) Give up\n";
  std::cin >> reaction;

  if (reaction == 1) {
    std::cout << "Death\n";
  }
  else if (room == 2) {
    std::cout << "Survived\n";
  }
  else if (room == 3) {
    std::cout << "Murderer takes pity on you\n";
  }
  else {
    std::cout << "Please enter a valid reaction\n";
  }
}
