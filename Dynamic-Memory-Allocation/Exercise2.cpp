Exe/* 2. Write a program that first reads an integer number for the array size, then reads the numbers into the
array, display elements of the array, the number of even numbers and the number of obb numbers */

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int size, arr[size], obb = 0, even = 0;
    int *ptr;
    ptr = (int*)malloc(size * sizeof(int));

    // input size
    cout << "input size of array: ";
    cin >> size;

    // input values
    cout << "input element in array: ";
    for ( int i = 0; i < size; i++){
        cin >> *(ptr + i);
    }

    // check if values contain at least one even or obb value
    for ( int i = 0; i < size; i++){
        if(*(ptr + i) % 2 == 0){
            even = 1;
        }
        else{
            obb = 1;
        }
    }


    // output for even values
    if(even == 1){
        cout << "Even number: " ;
        for ( int i = 0; i < size; i++){
            
            if(*(ptr + i) % 2 == 0){
                cout << *(ptr + i) << " ";
            }
            
        }
    }

    // output for obb values
    if(obb == 1){
        cout << endl << "Odd number: ";
        for ( int i = 0; i < size; i++){
            if(*(ptr + i) % 2 != 0){
                cout << *(ptr + i) << " ";
            }
        }
    }
    
    free(ptr);
    
    return 0;

}