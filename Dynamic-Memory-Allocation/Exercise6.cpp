#include<iostream>
using namespace std;
int main() {
 int x, n;
 cout << "Enter the size of array:" << "\n";
 cin >>n;
 char *arr = new char(n);
 cout << "Enter " << n << " characters" << endl;
 for (x = 0; x < n; x++) { 
  cin >> arr[x];
if(arr[x]=='a' || arr[x]=='e' || arr[x]=='i' || arr[x]=='o' || arr[x]=='u' || arr[x]=='A' || arr[x]=='E' || arr[x]=='I' || arr[x]=='O' || arr[x]=='U')
{
cout << endl ;
}
else
cout << "The consonant = " << arr[x]<<endl;
}
 return 0;
}
