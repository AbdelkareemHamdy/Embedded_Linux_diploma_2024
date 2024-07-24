/*
01_introduction
2- maximum number between three values
*/
#include <iostream>
/*
int GetTheMaxValue(const int Num1,const int Num2,const int Num3)
{
    int output=0;
    if (Num1 > Num2)
    {
        if (Num1 > Num3)
        {
            output = Num1;
        }
        else
        {
            output = Num3;
        }
    }
    else if (Num2 > Num3)
    {
        output = Num2;
    }
    else
    {
        output = Num3;
    }
    return output;
}
int main()
{
    int arr[3]={0};
    std::cout << "Enter the Frist Number :";
    std::cin >> arr[0];
    std::cout << "Enter the Secand Number :";
    std::cin >>arr[1];
    std::cout << "Enter the third Number :";
    std::cin >> arr[2];
    std::cout << "The max Number is : "<<GetTheMaxValue(arr[0],arr[1],arr[2]) << std::endl;
}
*/
#include <algorithm> 

int main()
{
    int arr[3]={0};
    std::cout << "Enter the Frist Number :";
    std::cin >> arr[0];
    std::cout << "Enter the Secand Number :";
    std::cin >>arr[1];
    std::cout << "Enter the third Number :";
    std::cin >> arr[2];
    std::sort(arr,&arr[3],[](int a,int b){return (a>b);});
    std::cout << "The max Number is : "<<arr[0] << std::endl;
}