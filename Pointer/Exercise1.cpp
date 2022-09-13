/* 1. Read an array of integers and print its elements in
    reverse order using pointer arithmetic */
#include <iostream>
using namespace std;
int main(){

    int arr[] = {1, 2, 3, 4, 5};

    // find size of array
    int size = sizeof(arr) / sizeof(int);

    int *p = arr + size - 1;
    // revert order of elements
    for(int i = 0; i < size; i++){
        cout << *(p - i) << " ";
    }
    return 0;
}
