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
    srand(time(0));
    string c[17] = {"computer", "television", "keyboaard", "laptop",
                    "mouse", "laptop", "bottle", "oil", "egg", "lamp",
                    "bag", "window", "goggles", "telephone", "cupboard", "headphones",
                    "jacket"};
    string word;
    word = c[rand() % 17];
    string guessedword;
    guessedword = "\n";
    int tries;
    while (guessedword != word)
    {  
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
    cout << word << endl;
    cin >> guessedword;
    tries++;
    if (guessedword == word)
    {
        cout << "YOU WON!!!";
        break;
    }
    else if (guessedword == "quit")
    {
        break;
    }
    }
    return 0;
}

/*Write a program that stores an array of words (containing ”computer”, ”television”,
”keyboard”, ”laptop”, ”mouse”) and 12 other words of your choice in an array of strings.
Inside of a game loop your program should randomly choose one word out of the 17 possible
words. The program should print the word on the screen after replacing all vowels by underscores, 

then the player should try to guess the word. After the player has guessed the right word,
the number of tries should be printed on the screen and the player should be asked whether
he/she wishes to play again. If the player enters ”quit” as a word guess, then the game should
immediately stop.
*/


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
    srand(time(0));
    string c[17] = {"computer", "television", "keyboaard", "laptop",
                    "mouse", "laptop", "bottle", "oil", "egg", "lamp",
                    "bag", "window", "goggles", "telephone", "cupboard", "headphones",
                    "jacket"};
    string word;
    word = c[rand() % 17];
   
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


    char ans;
    ans='y';
    while (ans == 'y' || ans == 'Y')
    { 
    string z = word;
    string guessedword;
    guessedword = "\n";
    int tries;
            cout << word << endl;
    cin >> guessedword;
        while (z != guessedword)
        {
            tries++;
            if (guessedword == z)
            {
                cout << "YOU WON!!!";
                break;
            }
            else if (guessedword == "quit")
            {
                break;
            }
            else
            {
                cin >> guessedword;
            }
        }
        cout << "Do you want to continue playing?";
        cin >> ans;
    }

    return 0;
}

/*Write a program that stores an array of words (containing ”computer”, ”television”,
”keyboard”, ”laptop”, ”mouse”) and 12 other words of your choice in an array of strings.
Inside of a game loop your program should randomly choose one word out of the 17 possible
words. The program should print the word on the screen after replacing all vowels by underscores, 

then the player should try to guess the word. After the player has guessed the right word,
the number of tries should be printed on the screen and the player should be asked whether
he/she wishes to play again. If the player enters ”quit” as a word guess, then the game should
immediately stop.
*/

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
    srand(time(0));
    string c[17] = {"computer", "television", "keyboaard", "laptop",
                    "mouse", "laptop", "bottle", "oil", "egg", "lamp",
                    "bag", "window", "goggles", "telephone", "cupboard", "headphones",
                    "jacket"};
    string word;
    word = c[rand() % 17];
    string z = word;
    string guessedword;
    guessedword = "\n";
    int tries;
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


    char ans;
    ans='y';
    while (ans == 'y' || ans == 'Y')
    {
        cout << word << endl;
        cin >> guessedword;
        while (z != guessedword)
        {
            tries++;
            if (guessedword == z)
            {
                cout << "YOU WON!!!";
                break;
            }
            else if (guessedword == "quit")
            {
                break;
            }
            else
            {
                cin >> guessedword;
            }
        }
        cout << "Do you want to continue playing?";
        cin >> ans;
    }

    return 0;
}

/*Write a program that stores an array of words (containing ”computer”, ”television”,
”keyboard”, ”laptop”, ”mouse”) and 12 other words of your choice in an array of strings.
Inside of a game loop your program should randomly choose one word out of the 17 possible
words. The program should print the word on the screen after replacing all vowels by underscores, 

then the player should try to guess the word. After the player has guessed the right word,
the number of tries should be printed on the screen and the player should be asked whether
he/she wishes to play again. If the player enters ”quit” as a word guess, then the game should
immediately stop.
*/