/*
01_introduction
6-summation the digits of integer entered by user
*/

#include <iostream>
#define DIGITS_BASE 10 
int main(){
    int sum=0,input = 0;
    std::cout << "Please, Enter the number : ";
    std::cin >> input;
    do
    {
        sum +=(input%DIGITS_BASE);
        input /= DIGITS_BASE;
    } while(input);
    std::cout << "The summation of the digits = "<<sum << std::endl;
    return 0;
}