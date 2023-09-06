#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int num, guess, tries = 0;
  srand(time(0));
  num = rand() % 1000 + 1; // random number between 1 and 1000 

do {
  cout << "Enter a guess between 1 and 1000: ";
  cin >> guess;
  tries++;

  if (guess > num)
    cout << "Your guess was too high. Please guess again.\n\n";
  else if (guess < num)
    cout << "Your guess was too low. Please guess again.\n\n";
  else if (guess = num)
    cout << "\nYou got it correct with " << tries << " guesses!\n";
} while (guess != num);
    return 0;
}