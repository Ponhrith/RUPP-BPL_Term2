#include <iostream>
#include <string>
#include <sstream>
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
    string countries[5]={"Brunei", "Cambodia", "East Timor", "Indonesia", "Laos"};
    string capitals[5]={"Bandar Seri Begawan", "Phnom Penh", "Dili", "Jakarta", "Vientiane"};
        
    string country;
    
    cout << "Country: ";
    cin >> country;
    
    int index = findCountry(countries,5,country);
     if (index >= 0)
        cout << "Capital: " << capitals[index];
    else
        cout << country << " is not a South East Asian Country";
    
    return 0;
}