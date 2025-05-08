#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

// Function to scramble a word
string scrambleWord(const string& word) {
    string scrambled_word = word;
    random_shuffle(scrambled_word.begin(), scrambled_word.end());
    return scrambled_word;
}

int main() {
    vector<string> words = {"alexander", "marvic", "imissyou", "cielomarie", "programming", "developer"};
    srand(time(0)); // Initialize random number generator

    // Randomly select a word from the list
    int random_index = rand() % words.size();
    string selected_word = words[random_index];
    string scrambled_word = scrambleWord(selected_word);

    string user_guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Scrambled Word Game!" << endl;
    cout << "Try to guess the word from the scrambled letters." << endl;
    cout << "Scrambled word: " << scrambled_word << endl;

    // Loop until the user guesses correctly
    while (user_guess != selected_word) {
        cout << "Enter your guess: ";
        cin >> user_guess;
        attempts++;

        if (user_guess == selected_word) {
            cout << "Congratulations! You guessed the word in " << attempts << " attempts." << endl;
        } else {
            cout << "Wrong guess, try again!" << endl;
        }
    }

    return 0;
}
