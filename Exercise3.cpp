#include<iostream>

using namespace std;
int main(){
	cout << "Conditions:" << endl;
	cout << "Password must have exactly 8 characters." << endl;
	cout << "Password must consist of only digits and letters." << endl;
	cout << "Password must always start with a digit." << endl;
	cout << "Password must contain at least one uppercase letter." << endl;
	
	int a=0,b=0;
	string password;
	
	// accept password
	cout << endl << "Enter Password: ";
	cin >> password;
	
	// check password
	int n = password.size();
	for(int i = 0; i < n; i++){
		
		// password must have exactly 8 characters
		if (n==8){
			
			// password must always start with a digit
			if(isdigit(password.at(0))){
			}
			else{
				cout << "Invalid Password: First Character Muct Be a Digit";
				break;
			}
			
			//password must consist of only digits and letters
			if ((password[i] >= '0' && password[i] <= '9') ||
		 		(password[i] >= 'A' && password[i] <= 'Z') || 
		 		(password[i] >= 'a' && password[i] <= 'z')){
				a=1;
				continue;
			}
		
			else {
				cout << "Invalid Password: Password Must Not Contain Speacal Charecter";
				a = 2;
				break;
			}
	
		}	
	
		else{
			cout << "Invalid Password: Password Must Be 8 Charecter";
			break;
		}
	}
		
	if (a==1){
		for(int i = 0; i < n; i++){
			for(int i = 0; i < n; i++)
				
				//password must contain at least one uppercase letter
				if(islower(password.at(i)) || isdigit(password.at(i))){
				  	b++;
          			continue;
				}
			
				if(b == 8){
					cout << "Invalid Password: Password Must Contain Uppercase";
					break;
				}
				
				else{
					cout << "Valid password";
					break;
				}
		}
			
	}

	return 0;
}
