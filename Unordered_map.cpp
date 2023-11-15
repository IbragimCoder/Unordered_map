#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

bool checkRansomLetterInPaper(std::string ransomLetter, std::string paper) 
{
    std::unordered_map<char, int> freqs1, freqs2; 

    for (char letter1 : ransomLetter)
    {
        freqs1[letter1]++;
    }
    for (char letter2 : paper) 
    {
        freqs2[letter2]++;
    }
    for (const std::pair<char, int>& entrance : freqs1) 
    {
        char letter = entrance.first;
        int count = entrance.second;

        if (freqs2[letter] < count) 
        {
            return false;
        }
    }

    return true;
}


int main()
{
    std::string words1 = "he";
    std::string words2 = "treeh";

    bool ransomLetterInPaper = checkRansomLetterInPaper(words1, words2);
    if (ransomLetterInPaper)
    {
        std::cout << "TRUE" << "\n";
    }
    else
    {
        std::cout << "FALSE" << "\n";
    }
  
    return 0;
}

