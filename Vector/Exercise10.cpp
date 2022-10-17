#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int findCountry(string arr[], int len, string seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}

int main(){
    std::vector<std::string> countries={"Cambodia", "Thailand", "China", "Japan", "India", "Malaysia"};
    std::vector<std::string> capital={"Phnom Penh", "Bangkok", "Beijing", "Tokyo", "Delhi", "Kuala Lumpur"};
        
    string country;
    
    cout << "Country: ";
    cin >> country;
    
    int index = findCountry(countries,5,country);
     if (index >= 0)
        cout << "Capital: " << capital[index];
    else
        cout << country << " is not a South East Asian Country";
    
    return 0;
}