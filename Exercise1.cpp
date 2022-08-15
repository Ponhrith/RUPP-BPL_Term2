#include <iostream>  
using namespace std;  
int main()  
{  
int number, sum = 0 , m, digitnumber = 0, average; 
 

cout  <<"Enter a number: ";    
cin >>number; 

while (number  > 0)    
{    
m = number%10;    
sum = sum+m;    
number = number/10; 
digitnumber++;   
}    


average = sum / digitnumber;
cout << "The average is "  << average;
return 0;
}