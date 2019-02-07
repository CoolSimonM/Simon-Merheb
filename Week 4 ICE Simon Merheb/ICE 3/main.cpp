/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    std::string sentence;
    std::cout << "Enter a sentence: ";
    getline(std::cin, sentence);
    
    int numWords = 0;
    unsigned long wordlength = 0;
    unsigned long wordStart = 0;
    unsigned long longestWordStart = 0;
    unsigned long longestWord = 0;
    
    for(int i = 0; i<sentence.length(); i++)
    {
        char ch = sentence[i];
        if(ch == ' ' || i ==(sentence.length()- 1))
        {
            numWords++;
            if(ch == ' ')
                wordlength = i - wordStart;
            else
                wordlength = i - wordStart + 1;
            if(wordlength > longestWord)
            {
                longestWord = wordlength;
                longestWordStart = wordStart;
            }
        }
        wordStart = i + 1;
    }
    
    
    
    std::cout << "There are " << numWords << " words in this sentence" << std::endl;
    std::cout << "The longest word has " << longestWord << " characters." << std::endl;
    std::cout << "The longest word is " << sentence.substr(longestWordStart, longestWord) << std::endl;
    return 0;
}
