#include <iostream>
#include <ctime>
#include <chrono>
#include <unistd.h>

using namespace std;

int main(){
 srand(time(0));

 bool dead = false;
 
 cout << "exercise 7" << endl;
 
 int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
  
  for(int i = 0; i <  1000; i++){
  for(int i = 0; i < 5; i++) {
   int random = rand() % 7;
  
    if(random == 1){ a++;}
    else if(random == 2){b++;}
    else if(random == 3){c++;}
    else if(random == 4){d++;}
    else if(random == 5){e++;}
    else if(random == 6){f++;}
  }   
  }   
   cout << "player 1 got bullet "  << a << endl;
  cout << "player 2 got bullet "  << b << endl;
  cout << "player 3 got bullet "  << c << endl;
  cout << "player 4 got bullet "  << d << endl;
  cout << "player 5 got bullet "  << e << endl;
  cout << "player 6 got bullet "  << f << endl;

  return 0;
}
