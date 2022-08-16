#include<iostream>

using namespace std;
int main(){

    int temp,rev,rem,b;
	// loop from 0 until 2002
   	for(int i = 0; i <= 2002 ; i++){
      	temp=i;
      	rev=0;
      	// find a reverse number
      	while(temp != 0){
         	rem=temp%10;
         	temp=temp/10;
         	rev=rev*10+rem;
      	}
      	// print even number
      	if(i==rev){
      		if(i % 2 == 0){
      			cout << " " << i;
      			b++;
    			if (b%10==0){
    				cout << endl;
    			}
    
  			}
    	}
         
   }
    return 0;
}
