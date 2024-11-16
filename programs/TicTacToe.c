#include <stdio.h>

char board[3][3];
char player = 'X';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -+-+-\n");
    }
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}

void switchPlayer() {
    if (player == 'X') {
        player = 'O';
    } else {
        player = 'X';
    }
}

void playGame() {
    int row, col;
    while (1) {
        printBoard();
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &col);

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = player;
            if (checkWin()) {
                printBoard();
                printf("Player %c wins!\n", player);
                break;
            }
            switchPlayer();
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
}

int main() {
    initializeBoard();
    playGame();
    return 0;
}
