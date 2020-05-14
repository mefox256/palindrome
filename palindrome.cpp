#include <iostream>

 bool isPalindrome(const std::string & text)
 {
     for(int i=0; i<text.size()/2; i++)
     {
         if(text[i]!=text[text.size()-i-1])
            return false;
     }
     return true;
 }

int main()
{
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    if(isPalindrome(word))
        std::cout << word << " is a palindrome";
    else
        std::cout << word << " isn't a palindrome";
    return 0;
}
