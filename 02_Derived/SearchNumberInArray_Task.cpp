/*
02_Derived
2- create a function to search to the number in the array which number is taken from user
*/
#include <iostream>
int main() {
    int Array[]={5,10,9,8,60,55,70};
    int Number,flag=0;
    std::cout << "Please Enter the number : ";
    std::cin >> Number;
    for (int i : Array) {
        if (i == Number)
        {
            std::cout << "The number is exist ^__^" << std::endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        std::cout << "The Number is Not exist !!!!!!" << std::endl;
    }
    return 0;
}