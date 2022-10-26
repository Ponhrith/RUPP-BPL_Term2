#include <iostream>
#include <vector>
using namespace std;
void draw_board(const vector< vector<char> >& vec)
{
    cout << "    1   2   3  \n";
    cout << "  +---+---+---+\n";
    for (int i = 1; i < vec.size(); i++)
    {
        cout << i << " " ;
        for (int j = 1; j < vec[i].size(); j++)
        {
    	cout << "| " << vec[i][j] << " ";
        }
        cout << "|";
        cout << '\n';
        cout << "  +---+---+---+\n";
    }
}

void enter(unsigned int row, unsigned int col, char ch, vector< vector<char> >& vec)
{
    vec[row][col] = ch;
}

bool check(const vector< vector<char> >& vec)
{
    //check diagonal
    if ((vec[1][1] == 'X' && vec[2][2] == 'X' && vec[3][3] == 'X')
        || (vec[1][3] == 'X' && vec[2][2] == 'X' && vec[3][1] == 'X'))
        {
            cout << "Player X Won \n";
            return true;
        }
    else if ((vec[1][1] == 'O' && vec[2][2] == 'O' && vec[3][3] == 'O')
             || (vec[1][3] == 'O' && vec[2][2] == 'O' && vec[3][1] == 'O'))
    	{
            cout << "Player O Won \n";
            return true;
    	}

    //check horizonatal and vertical
    for (int i = 1; i < vec.size(); i++)
    {
        if ((vec[i][1] == 'X' && vec[i][2] == 'X' && vec[i][3] == 'X')
              || (vec[1][i] == 'X' && vec[2][i] == 'X' && vec[3][i] == 'X'))
              {
                  cout << "Player X Won \n";
                  return true;
              }
        else if((vec[i][1] == 'O' && vec[i][2] == 'O' && vec[i][3] == 'O')
              || (vec[1][i] == 'O' && vec[2][i] == 'O' && vec[3][i] == 'O'))
              {
                  cout << "Player O Won \n";
                  return true;
              }
    }
    return false;
}

void start(vector< vector<char> >& vec)
{
    unsigned int row, col;
    int res = 1;
    char ch;
    for (int i = 0; i < 9;)
    {
        if (i == 0 || i%2 == 0)
        {
            ch = 'X';
            cout << "Player X Turn\n";
        }
        else
        {
            ch = 'O';
            cout << "Player O Turn\n";
        }
        cout << "Enter Row and Column ";
        cin >> row >> col;
        if (row < 4 && col < 4)
        {
            if (vec[row][col] == ' ' || vec[row][col] == ' ')
            {
                enter(row, col, ch, vec);
                draw_board(vec);
                if ( i >= 3)
                {
                    res = check(vec);
                    if (res == 1)
                    {
                      break;
                    }
                }
                i++;
              }
              else
              {
                  cout << "This position already contains a character\n";
              }
        }
        else
        {
            cout << "Enter row number and column number between 1 to 3\n";
        }

    }
    if (res == 0)
    {
        cout << "This game is draw\n";
    }
}

int main()
{
    vector< vector<char> > board(4, vector<char>(4, ' '));
    draw_board(board);
    start(board);
}
