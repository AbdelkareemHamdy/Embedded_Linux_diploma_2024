/*
01_introduction
4-decide the letter is vowel or not
*/
#include <iostream>

bool IsVowel(char Character)
{
    bool result=false;
    switch (Character)
    {
    case 'a':
    case 'e':
    case 'u':
    case 'i':
    case 'o':
        result = true;
        break;
    default:
        break;
    }
    return result;
}
int main()
{
    char Letter=0;
    std::cout << "please,Enter the letter :";
    std::cin >> Letter;
    if (IsVowel(Letter))
    {
        std::cout << "The letter is vowel." << std::endl;
    }
    else
    {
        std::cout << "The letter is not vowel." << std::endl;
    }
    return 0;
}