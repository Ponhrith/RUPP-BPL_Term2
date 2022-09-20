#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
 // declare 4 integer variable
 int x, n,consonants=0,vowels=0;
 // User enter the value of variable n
 cout << "Enter the size of array: ";
 cin >>n;
 // declare an array to hold a total of n integers and assigning it to pointer variable *arr
char *arr = (char*) malloc(100 * sizeof(char));
 // print the message the user to enter n number of characters
 cout << "Enter " << n << " characters" << endl;
 // for loop to createa a loop variable x to iterate over the character entered by the user and read the elements entered by the user and store them in the array arr
 for (x = 0; x < n; x++) { 
  cin >> arr[x];
if(arr[x]=='a' || arr[x]=='e' || arr[x]=='i' || arr[x]=='o' || arr[x]=='u' || arr[x]=='A' || arr[x]=='E' || arr[x]=='I' || arr[x]=='O' || arr[x]=='U')
{
vowels++;
}
else
{
consonants++;
cout << "The consonant = "<<consonants<<endl;
}
}
 free(arr);
 return 0;
}
