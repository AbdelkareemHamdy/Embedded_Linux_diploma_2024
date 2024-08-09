/*
4- merge two arrays together
*/

#include <iostream>


int main() {
    int Array_1[] = {10,5,6,9,8};
    int Array_2[] = {1,9,8,3,4};
    int Size_1 = sizeof(Array_1)/sizeof(Array_1[0]);
    int Size_2 = sizeof(Array_2)/sizeof(Array_2[0]);
    int counter=0,Array_Merge[Size_1+Size_2];
    //Merging
    for (int i : Array_1) {
        Array_Merge[counter]=i;
        counter++;
    }
    for (int i : Array_2) {
        Array_Merge[counter]=i;
        counter++;
    }
    //printing
    for (auto i : Array_Merge) {
    std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}