/*Write a test program that prompts the user to enter two 3 x 3 matrices and displays their sum.*/

#include<iostream> 
#include<vector>
 
using namespace std;
 
int main() { 
	int k, l, m, n;
	// User enter Dimensions of matrix 1
    cout << "Dimensions of matrix 1: ";	cin >> k >> l; 
	vector<vector<float> > matrix1(k, vector<float>(l, 0));
	// User Enter matrix1 elements
	cout << "\nEnter matrix1 elements: "; 
	for(int i=0; i<k; i++){ 
		for(int j=0; j<l; j++){ 
			cin >> matrix1[i][j]; 
		}
	}
	// User enter Dimensions of matrix 2
	cout << "\nDimensions of matrix 2: ";	cin >> m >> n; 
	vector<vector<float> > matrix2(m, vector<float>(n, 0));
	// User Enter matrix2 elements
	cout << "\nEnter matrix2 elements: "; 
	for(int i=0; i<m; i++){ 
		for(int j=0; j<n; j++){ 
			cin >> matrix2[i][j]; 
		} 
	}
	//Display The Elements
	if(k==m && l==n)
	{
	cout<<"\nSum of Two Matrix is:\n\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cout<<matrix1[i][j]<<"   "; // element matrix 1
        if(i==1)
            cout<<"  +     "; // row 2
        else
            cout<<"        "; //row 1 and row 3
        for(int j=0; j<3; j++)
            cout<<matrix2[i][j]<<"    "; // element matrix 2
        if(i==1)
            cout<<" =     "; // row 2
        else
            cout<<"       "; //row 1 and row 3
        for(int j=0; j<3; j++)
            cout<<matrix1[i][j]+matrix2[i][j]<<"    "; // sum of two matrix
        cout<<endl;
    }
    	cout<<endl;}
    else{ 
		cout << "Matrices are not compatible for addition: must have same dimensions\n"; 
	}
	return 0; 
} 
