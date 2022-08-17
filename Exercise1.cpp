#include <iostream>  
using namespace std;  
int main()  
{  
int number, sum = 0 , m, digitnumber = 0, average; 
 
//ask user to input number
cout  <<"Enter a number: ";    
cin >>number; 

while (number  > 0)    
{    
    
m = number%10;  //divide the number into element and sum all element 
sum = sum+m;    
number = number/10; 

digitnumber++;  // count the number digit 
}    


average = sum / digitnumber;//find the average

cout << "The average is "  << average;//display the output
return 0;
}