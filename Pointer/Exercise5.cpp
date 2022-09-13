
/*5. Using pointers, write a function to shuffle an array of integers.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;
int main(){

    int a[10];
    int i, j, num, random, temp;
    int *p = a;


//input size of array
    cout << "input size of array: ";
    cin >> num;
 
//input number 
    cout << "input array: ";
    for (i = 0; i < num; i++)
    {
        cin >> a[i];
    }
 srand(time(0));

// shuffle the array
for (int i = 0; i < num; i++){
random = rand() % num; 
if(i == random)

continue;

//swap the elements
temp = *p;
*p = a[random];
a[random] = temp;
}

// display the result
for(int i = 0; i < num; i++){
cout << a[i] << "\t";
}
    return 0;
}