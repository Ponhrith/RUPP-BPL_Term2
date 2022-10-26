#include <iostream>
#include <vector>
using namespace std;
void draw_board(const vector< vector<char> > &vec){
    cout << "  -------------\n";
    for (int i = 0; i < vec.size(); i++){
        cout << "  " ;
        for (int j = 0; j < vec.size(); j++){
    	    cout << "| " << vec[i][j] << " ";
        }
        cout << "|\n";
        cout << "  -------------\n";
    }
}

void enter(int row, int col, char ch, vector< vector<char> > &vec){
    vec[row][col] = ch;
}

bool check(const vector< vector<char> > &vec){
    //check diagonal
    if ((vec[0][0] == 'X' && vec[1][1] == 'X' && vec[2][2] == 'X')
     || (vec[0][2] == 'X' && vec[1][1] == 'X' && vec[2][0] == 'X')){
        cout << "\nPlayer X Won \n";
        return true;
    }

    else if ((vec[0][0] == 'O' && vec[1][1] == 'O' && vec[2][2] == 'O')
          || (vec[0][2] == 'O' && vec[1][1] == 'O' && vec[2][0] == 'O')){
        cout << "\nPlayer O Won \n";
        return true;
    }

    //check horizonatal and vertical
    for (int i = 0; i < vec.size(); i++){
        
        if ((vec[i][0] == 'X' && vec[i][1] == 'X' && vec[i][2] == 'X')
         || (vec[0][i] == 'X' && vec[1][i] == 'X' && vec[2][i] == 'X')){
                cout << "\nPlayer X Won \n";
                return true;
        }

        else if((vec[i][0] == 'O' && vec[i][1] == 'O' && vec[i][2] == 'O')
             || (vec[0][i] == 'O' && vec[1][i] == 'O' && vec[2][i] == 'O')){
                cout << "\nPlayer O Won \n";
                return true;
        }
    }

    return false;
}

void start(vector< vector<char> > &vec){
    int row, col;
    bool res = true;
    char ch;
    for (int i = 0; i < 9;){

        if (i % 2 == 0){
            ch = 'X';
        }

        else{
            ch = 'O';
        }

        cout << "\nEnter row column for player "<< ch <<": ";
        cin >> row >> col;

        if (row < 3 && col < 3){

            if (vec[row][col] == ' '){

                enter(row, col, ch, vec);
                draw_board(vec);

                if (i >= 3){
                    res = check(vec);

                    if (res == true){
                        break;
                    }
                }

                i++;

            }
              
            else{
                cout << "\nThis position already contains character "<< ch <<"\n";
            }

        }

        else{
            cout << "\nEnter row number and column number between 1 to 2\n";
        }

    }

    if (res == false){
        cout << "\nThis game is draw\n";
    }
}

int main(){
    vector< vector<char> > board = {{' ', ' ', ' '},
                                    {' ', ' ', ' '},
                                    {' ', ' ', ' '}};
    draw_board(board);
    start(board);

    return 0;
}
