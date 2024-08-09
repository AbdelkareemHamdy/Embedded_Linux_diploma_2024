/*
02_Derived
3- delete number in array
*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> Array={5,10,9,8,60,55,70};
    constexpr int arrSize = sizeof(Array)/sizeof(Array[0]);
    int i,Number;
    std::cout << "Please Enter the number : ";
    std::cin >> Number;
    for ( i = 0; i <=arrSize; i++)
    {
        if (Array[i]==Number)
        {
            Array.erase(Array.begin()+i);
            std::cout << "The Number has been deleted ^__^" << std::endl;
            for (auto x : Array) {
                std::cout << x << " ";
            }
            std::cout << std::endl;
            break;
        }
    }
    if (i == arrSize+1)
    {
        std::cout << "Sorry, The number is not existed" << std::endl;
    }
    return 0;
}
