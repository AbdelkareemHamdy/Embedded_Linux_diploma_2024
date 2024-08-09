/*
02_Derived
5-ﬁnd the even and odd numbers in the array
*/
#include<iostream>
#include<vector>

int main(){
    std::vector<int> arr={1,4,7,8,9,4,7},oddArr,EvenArr;
    std::cout << "Hello World!" << std::endl;
    for(auto i : arr){
        if(i%2){
            oddArr.push_back(i);
        }
        else {
            EvenArr.push_back(i);
        }
    }
    for(auto i : oddArr){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for(auto i : EvenArr){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}