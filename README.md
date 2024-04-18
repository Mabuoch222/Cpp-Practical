#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  int choice;

  cout << "Welcome to the Text-Based Adventure Game!" << endl;
  cout << "What is your name adventurer? ";
  getline(cin, name);

  cout << "Hello, " << name << endl;
  cout << "You find yourself standing in a dark forest. A path leads north and a faint glow emanates from the east." << endl;
  cout << "Which direction do you choose? (1 - North, 2 - East) ";
  cin >> choice;

  if (choice == 1) {
    cout << "You head north, deeper into the forest. The trees become denser and the sunlight struggles to penetrate." << endl;
    cout << "Suddenly, you hear a rustling in the bushes. A wolf emerges, baring its teeth." << endl;
    cout << "Do you (1 - Fight, 2 - Run)? ";
    cin >> choice;
    if (choice == 1) {
      cout << "You bravely fight the wolf, but it overpowers you. Game Over!" << endl;
    } else {
      cout << "You turn and run as fast as you can. You manage to escape the wolf and continue north." << endl;
      // Add more content for the north path here
    }
  } else if (choice == 2) {
    cout << "You follow the faint glow to a clearing. In the center, you see a shimmering portal." << endl;
    cout << "Do you enter the portal (1 - Yes, 2 - No)? ";
    cin >> choice;
    if (choice == 1) {
      cout << "You step through the portal and find yourself in a mystical land. You've won the game!" << endl;
    } else {
      cout << "You decide not to enter the portal and turn back. The forest path disappears, and you are lost. Game Over!" << endl;
    }
  } else {
    cout << "Invalid choice. Game Over!" << endl;
  }

  return 0;
}
# CPP-PRACTICAL FOR SEMESTER 2:
