/*
01_introduction
1-Create a table for AscII code
*/

#include <iostream>
int main()
{
    unsigned char Charchter = '\0';
    std::cout << "ASCII Code Table:" << std::endl;
    std::cout << "+------+-------+" << std::endl;
    std::cout << "| Char | ASCII |" << std::endl;
    std::cout << "+------+-------+" << std::endl;
    do
    {
        std::cout << "|"<<Charchter<<"\t| "<<((int)Charchter)<<"\t|"<< std::endl;
        Charchter++;   
    } while(Charchter);
    std::cout << "+------+-------+" << std::endl;
    return 0;
}