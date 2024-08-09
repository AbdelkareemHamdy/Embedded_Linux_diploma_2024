/*
02_Derived
1- create a function to ﬁnd the maximum number of array
*/
#include <iostream>

int main(int argc, const char** argv) {
    int Array[]={5,10,9,8,60,55,70};
    int Output;
    [&max = Output,Array]()-> void{
        max = Array[0];
        for(int i : Array)
        {
            if (i > max)
            {
                max = i;
            }
        }
        
    }();
    std::cout << "The Max ="<< Output << std::endl;
    return 0;
}
