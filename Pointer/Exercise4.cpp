/* 4.Create a pointer to array of integers. Find the largest and smallest using pointers. */

#include<iostream>
using namespace std;
int main(){

    // input size
    int size;
    cout << "Enter size for array: ";
    cin >> size;

    // input integers
    int in[size];
    cout << "Enter integers: ";
    for(int i = 0; i < size; i++){
        cin >> in[i];
    }

    // pointer to array
    int *p = in;

    int big = 0, small = *p;

    // find the largest and smallest integer
    for(int i = 0; i < size; i++){
        
        // check if integer is bigger then the pervious integer
        if(*(p + i) > big){
            big = *(p + i);
        }

        // check if integer is smaller then the pervious integer
        if(*(p + i) < small){
            small = *(p + i);
        }
        
    }

    // output
    cout << "The largest integer in the array:  " << big << endl;
    cout << "The smallest integer in the array:  " << small;

    return 0;
}