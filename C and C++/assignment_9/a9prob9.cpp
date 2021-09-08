/*
CH-230-A
a9_p9.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char ans;
    ans = 'y';

    /*using the while loop as the game loop until the player enters quit or
    do not enter y or Y when asked to play again*/
    while (ans == 'y' || ans == 'Y')
    {
        srand(time(0));
        //declaring the array of given 5 words and 12 other words
        string c[17] = {"computer", "television", "keyboaard", "laptop",
                        "mouse", "laptop", "bottle", "Oil", "egg", "lamp",
                        "bag", "window", "goggles", "telephone", "cupboard",
                        "headphones", "jacket"};

        //selecting the random word form the array of the wods declared below
        string word;
        word = c[rand() % 17];
        string z = word;
        string guessedword; 
        guessedword = "\n";
        int tries = 1;

        //removing the vowels in the words that fed to the code of game
        for (unsigned int i = 0; i < (word.length()); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
                word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
                word[i] == 'U')
            {
                word[i] = '_';
            }
        }

        //printing the words of the game with vowels replaced by underscore
        cout << word << endl;

        //feeding input to the game i.e guessing the word by player
        cin >> guessedword;
        while (z != guessedword)
        {
            //stopping the game if the player enters quit
            if (guessedword == "quit")
            {
                break;
            }

            /*feeding input for the guessed word inside the loop
            that */
            cin >> guessedword;
            tries++;
        }
        if (z == guessedword)
        {
            cout << "Congrats" << endl;

            /*printing the total number of tries*/
            cout << "total try=" << tries << endl;
        }
                    /*asking the player whethers/he wants to play again or not*/
            cout << "Do you want to continue playing?";
            cin >> ans;
    }
    return 0;
}
