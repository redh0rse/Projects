#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        cout << "Guess the number between 1 to 100" << endl;
        cin >> guess;
        if (guess > number)
        {
            cout << "Guess lower number please" << endl;
        }
        else if (guess < number)
        {
            cout << "Guess higher number please" << endl;
        }
        else
        {
            cout << "You guessed the right number in " << nguesses << " attemps" << endl;
        }
        nguesses++;
    } while (guess != number);
    return 0;
}
