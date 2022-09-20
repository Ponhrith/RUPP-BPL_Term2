/*Write a program that keeps reading an integer until the sum of all integers which have been read is 
greater than 100, then displays sum and all of the integers that have been read.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    
    
    int *ptr,num = 0, sum = 0, count = 0,c = 0;
     ptr = (int*)malloc(100 * sizeof(int));


    while(true){
        cout << "Input numbers: ";
        cin >> *ptr;
        count++;
        
        *(ptr + c++) = *ptr;

        sum += *ptr;
        
        if (sum > 100){
            break;}
        
    }

    
    cout << "The answer are: "<< sum << endl;
     cout << "Number that read: ";
    for(int i = 0; i < count; i++){
        cout << *(ptr + i) << " ";
    }

    free(ptr);

    return 0;
    
}