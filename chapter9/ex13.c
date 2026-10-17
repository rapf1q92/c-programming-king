//a function that evaluates a chess position 
// rapf 16-oct-2026

#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
    int value_game;
    char board[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {0}, {0}, {0}, {0},
                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        { 0, 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

    value_game = evaluate_position(board);

    printf("The value of the position of this chess game is: %d", value_game);

    return 0;
}

int evaluate_position(char board[8][8])
{
    int i, j, game = 0;

    for(i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            switch (board[i][j]) {
                case 'Q': game += 9; break;
                case 'R': game += 5; break;
                case 'B': game += 3; break;
                case 'N': game += 3; break;
                case 'P': game += 1; break;
                case 'q': game -= 9; break;
                case 'r': game -= 5; break; 
                case 'b': game -= 3; break;
                case 'n': game -= 3; break;
                case 'p': game -= 1; break;
                default:
                    break;
            }
        }
    }

    return game;
}