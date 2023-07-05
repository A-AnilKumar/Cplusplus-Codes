#include <iostream>
using namespace std;

void printBoard(char Board[3][3]) {
    cout<< "\n Tic Tac Toe \n"<<endl;
    for (int i = 0; i < 3; i++) {
      cout<<"+---+---+---+\n";
      cout<<"|";
        for (int j = 0; j < 3; j++) {
            cout <<Board[i][j] << "  |";
        }
        cout << endl;
    }
      cout<<"+---+---+---+\n\n";
}

bool haveWon(char Board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (Board[i][0] == player && Board[i][1] == player && Board[i][2] == player) {
            return true;
        }
        if (Board[0][i] == player && Board[1][i] == player && Board[2][i] == player) {
            return true;
        }
    }
    if (Board[0][0] == player && Board[1][1] == player && Board[2][2] == player) {
        return true;
    }
    if (Board[0][2] == player && Board[1][1] == player && Board[2][0] == player) {
        return true;
    }
    return false;
}

int main() {
    char Board[3][3];
    int spaceLeft = 9;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Board[i][j] = ' ';
        }
    }
    char player = 'X';
    bool gameOver = false;
    while (!gameOver) {
        printBoard(Board);
        int row;
        int col;
        while (true) {
            cout << "Player " << player << " enter : " << endl;
            cin >> row;
            cin >> col;
            if (row < 0 || row > 2  || col < 0 || col > 2) {
                cout << "Input values for row and col between (0 - 2)" << endl;
                continue;
            }
            break;
        }
        if (Board[row][col] == ' ') {
            spaceLeft--;
            Board[row][col] = player;
            gameOver = haveWon(Board, player);
            if (gameOver) {
                cout << "Player " << player << " won" << endl;
            }
            player = player == 'X' ? 'O' : 'X';
            if (spaceLeft == 0) {
                cout << "     DRAW MATCH  !!" << endl;
                cout << "Game Over" << endl;
                printBoard(Board);
                break;
            }
        }
      else{
        cout<<"\n INVALID MOVE..!!\n";
      }
    }
    return 0;
}
