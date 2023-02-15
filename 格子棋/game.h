#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

void Initboard(char board[ROW][COL], int row, int col);
void Printboard(char board[ROW][COL], int row, int col);
void Plaermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);