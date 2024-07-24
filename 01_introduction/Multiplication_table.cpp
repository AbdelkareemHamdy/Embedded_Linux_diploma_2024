/*
01_introduction
5-multiplication table
*/

#include <iostream>
int main()
{
    
    for (int i : {1,2,3,4,5,6,7,8,9,10,11,12})
    {
        for (int j=1; j <= i; j++)
        {
            std::cout << i << '*' << j << '=' << (i*j) << '\t';
        }
        std::cout << std::endl;
    }
    return 0;
}