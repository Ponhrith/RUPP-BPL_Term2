/* 5. Write a program that first will read integers from the user into an array until the user enters 0.Then,
it displays all distinct integers that have been read. (Hint: read an integer and store it into an array if
it is not duplicates with any integer that has been input. If it is duplicated, discard it; do not store it.
After the input, the array contains only the distinct integers.) */

#include<iostream>
#include <cstdlib>

using namespace std;
int main(){

    int count = 0;
    int *arr = NULL;
    arr = (int*)malloc(100 * sizeof(int));
    int *ptr = (int*)malloc(100 * sizeof(int));
 

    while(true){

        // input
        cout << "Enter an integer: ";
        cin >> *ptr;

        // give the pointer an address
        *(ptr + count++) = *ptr;
        
        // check if the enter value is 0 or not
        if(*ptr == 0){

           cout << "All the distinct numbers are: ";
           // loop to find distinct numbers
            for(int i = 0; i < count; i++){
                int j;
                for(j= 0; j < count; j++){
                  if((*(ptr + i) == *(ptr + j)) && i != j){
                       break;   
                  }
                }

                // output
                if(j == count){
                    arr[i] = *(ptr + i);
                    cout << arr[i] << " ";
                }
            }
            
            free(ptr);
            free(arr);
            exit(0);
            
        }
    }

    
    
    return 0;
}