#include <stdio.h>

void displayBoard(char board[3][3]) {
    printf("\nTic-Tac-Toe Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("-----------\n");
    }
    printf("\n");
}

int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }

    return 0;
}

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int row, col;
    int currentPlayer = 1;

    do {

        displayBoard(board);

        printf("Player %d, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] == 'X' || board[row - 1][col - 1] == 'O') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row - 1][col - 1] = (currentPlayer == 1) ? 'X' : 'O';

        if (checkWin(board, (currentPlayer == 1) ? 'X' : 'O')) {
            displayBoard(board);
            printf("Player %d wins!\n", currentPlayer);
            break;
        }

        int tie = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O') {
                    tie = 0;
                    break;
                }
            }
            if (!tie) break;
        }

        if (tie) {
            displayBoard(board);
            printf("It's a tie!\n");
            break;
        }

        
        currentPlayer = (currentPlayer == 1) ? 2 : 1;

    } while (1);

    return 0;
}
